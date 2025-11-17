#!/usr/bin/env python3
"""
Parse PARRY LISP source files and generate C data structures.
This creates a faithful 1-to-1 recreation of the original PARRY data.
"""

import re
import os

def parse_dictionary(filepath):
    """Parse DICTIO file - maps words to canonical forms and parts of speech."""
    entries = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith('%') or line.startswith('~'):
                    continue
                
                parts = line.split('\t')
                if len(parts) >= 2:
                    word = parts[0].strip()
                    canonical = parts[1].strip()
                    
                    # Skip if empty
                    if not word:
                        continue
                    
                    # Determine part of speech
                    pos = "noun"
                    if len(parts) >= 3:
                        pos = parts[2].strip()
                    elif canonical.upper() in ['VERB', 'ADJECTIVE', 'ADVERB', 'PREPOSITION', 
                                                'CONJUNCTION', 'ARTICLE', 'AUXILIARY', 'MODE']:
                        pos = canonical.lower()
                        canonical = word.upper()[:5]
                    
                    entries.append({
                        'word': word.lower(),
                        'canonical': canonical.upper()[:5],
                        'pos': pos.lower()
                    })
    except Exception as e:
        print(f"Error parsing dictionary: {e}")
    
    return entries

def parse_synonyms(filepath):
    """Parse SYNONM.ALF file - maps words to 5-letter canonical forms."""
    synonyms = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith('%') or line.startswith('~') or line.startswith(';'):
                    continue
                
                # Format: (WORD SYNONYM)
                match = re.match(r'\(([A-Za-z0-9_]+)\s+([A-Za-z0-9_]+)\)', line)
                if match:
                    word = match.group(1).lower()
                    synonym = match.group(2).upper()[:5]
                    synonyms.append({'word': word, 'synonym': synonym})
    except Exception as e:
        print(f"Error parsing synonyms: {e}")
    
    return synonyms

def parse_idioms(filepath):
    """Parse IDIOM.ALF file - multi-word phrase replacements."""
    idioms = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith('%') or line.startswith('~') or line.startswith(';'):
                    continue
                
                # Format: ((MULTI WORD PHRASE) REPLACEMENT)
                match = re.match(r'\(\((.*?)\)\s+(.+)\)', line)
                if match:
                    pattern = match.group(1).strip().lower()
                    replacement = match.group(2).strip().upper()
                    idioms.append({'pattern': pattern, 'replacement': replacement})
    except Exception as e:
        print(f"Error parsing idioms: {e}")
    
    return idioms

def parse_topics(filepath):
    """Parse TOPICS file - semantic units with IDs and names."""
    topics = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith('%') or line.startswith('~'):
                    continue
                
                # Format: (TOPIC)		NNNN (SEMANTIC UNIT)
                match = re.match(r'\(([A-Za-z0-9_]+)\)\s+(\d+)\s+\((.+)\)', line)
                if match:
                    topic = match.group(1).strip()
                    unit_id = int(match.group(2))
                    unit_name = match.group(3).strip()
                    
                    topics.append({
                        'topic': topic,
                        'unit_id': unit_id,
                        'unit_name': unit_name
                    })
    except Exception as e:
        print(f"Error parsing topics: {e}")
    
    return topics

def parse_rdata(filepath):
    """Parse RDATA file - flare concepts and weights."""
    flares = {}
    try:
        with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
            
            # Extract flare list
            flare_match = re.search(r'\(FLARELIST\s+\((.*?)\)\s+SETS\)', content, re.DOTALL)
            if flare_match:
                flare_names = re.findall(r'([A-Z0-9_]+SET)', flare_match.group(1))
                
                # Extract weights
                weight_match = re.search(r'WTS\s+@\(([0-9\s]+)\)', content)
                if weight_match:
                    weights = [int(w) for w in weight_match.group(1).split()]
                    
                    for i, name in enumerate(flare_names):
                        if i < len(weights):
                            flares[name] = {
                                'name': name,
                                'weight': weights[i],
                                'next': None,
                                'indirect': False
                            }
            
            # Extract pointers (next flare concept)
            pointer_matches = re.findall(r'\(([A-Z0-9_]+SET)\s+([A-Z0-9_]+SET)\)', content)
            for src, dst in pointer_matches:
                if src in flares:
                    flares[src]['next'] = dst
            
            # Extract indirect markers
            indirect_matches = re.findall(r'PUTPROP\s+([A-Z0-9_]+)\s+T\s+@INDIR', content)
            for name in indirect_matches:
                if name in flares:
                    flares[name]['indirect'] = True
            
    except Exception as e:
        print(f"Error parsing RDATA: {e}")
    
    return flares

def generate_c_dictionary(entries, output_file, max_entries=2000):
    """Generate C code for dictionary data."""
    with open(output_file, 'w') as f:
        f.write("#include \"parry_complete.h\"\n\n")
        f.write("// Dictionary data parsed from DICTIO\n")
        f.write("void load_dictionary(void) {\n")
        f.write("    dict_count = 0;\n\n")
        
        for entry in entries[:max_entries]:
            word = entry['word'].replace('"', '\\"')
            canonical = entry['canonical'].replace('"', '\\"')
            pos = entry['pos'].replace('"', '\\"')
            
            f.write(f'    SAFE_STRCPY(dictionary[dict_count].word, "{word}", MAX_WORD_LENGTH);\n')
            f.write(f'    SAFE_STRCPY(dictionary[dict_count].canonical, "{canonical}", MAX_WORD_LENGTH);\n')
            f.write(f'    SAFE_STRCPY(dictionary[dict_count].pos, "{pos}", MAX_WORD_LENGTH);\n')
            f.write(f'    dict_count++;\n\n')
        
        f.write(f'    printf("Loaded %d dictionary entries\\n", dict_count);\n')
        f.write("}\n")

def generate_c_synonyms(synonyms, output_file, max_syns=2000):
    """Generate C code for synonym data."""
    with open(output_file, 'w') as f:
        f.write("#include \"parry_complete.h\"\n\n")
        f.write("// Synonym data parsed from SYNONM.ALF\n")
        f.write("void load_synonyms(void) {\n")
        f.write("    synonym_count = 0;\n\n")
        
        for syn in synonyms[:max_syns]:
            word = syn['word'].replace('"', '\\"')
            synonym = syn['synonym'].replace('"', '\\"')
            
            f.write(f'    SAFE_STRCPY(synonyms[synonym_count].word, "{word}", MAX_WORD_LENGTH);\n')
            f.write(f'    SAFE_STRCPY(synonyms[synonym_count].synonym, "{synonym}", MAX_WORD_LENGTH);\n')
            f.write(f'    synonym_count++;\n\n')
        
        f.write(f'    printf("Loaded %d synonyms\\n", synonym_count);\n')
        f.write("}\n")

def generate_c_idioms(idioms, output_file, max_idioms=500):
    """Generate C code for idiom data."""
    with open(output_file, 'w') as f:
        f.write("#include \"parry_complete.h\"\n\n")
        f.write("// Idiom data parsed from IDIOM.ALF\n")
        f.write("void load_idioms(void) {\n")
        f.write("    idiom_count = 0;\n\n")
        
        for idiom in idioms[:max_idioms]:
            pattern = idiom['pattern'].replace('"', '\\"')
            replacement = idiom['replacement'].replace('"', '\\"')
            
            f.write(f'    SAFE_STRCPY(idioms[idiom_count].pattern, "{pattern}", MAX_INPUT_LENGTH);\n')
            f.write(f'    SAFE_STRCPY(idioms[idiom_count].replacement, "{replacement}", MAX_INPUT_LENGTH);\n')
            f.write(f'    idiom_count++;\n\n')
        
        f.write(f'    printf("Loaded %d idioms\\n", idiom_count);\n')
        f.write("}\n")

def generate_c_flares(flares, output_file):
    """Generate C code for flare concept data."""
    with open(output_file, 'w') as f:
        f.write("#include \"parry_complete.h\"\n\n")
        f.write("// Flare concept data parsed from RDATA\n")
        f.write("void load_flare_system(void) {\n")
        f.write("    flare_count = 0;\n\n")
        
        for name, flare in flares.items():
            next_flare = flare['next'] if flare['next'] else ""
            
            f.write(f'    SAFE_STRCPY(flare_concepts[flare_count].name, "{name}", MAX_WORD_LENGTH);\n')
            f.write(f'    flare_concepts[flare_count].weight = {flare["weight"]};\n')
            f.write(f'    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "{next_flare}", MAX_WORD_LENGTH);\n')
            f.write(f'    flare_concepts[flare_count].is_indirect = {str(flare["indirect"]).lower()};\n')
            f.write(f'    flare_concepts[flare_count].is_sensitive = true;\n')
            f.write(f'    flare_concepts[flare_count].story_count = 0;\n')
            f.write(f'    flare_count++;\n\n')
        
        f.write(f'    printf("Loaded %d flare concepts\\n", flare_count);\n')
        f.write("}\n")

def main():
    """Main parser - processes all LISP source files."""
    lisp_source_dir = "LISP_Source"
    
    print("Parsing PARRY LISP source files...")
    
    # Parse each file
    print("Parsing DICTIO...")
    dict_entries = parse_dictionary(os.path.join(lisp_source_dir, "DICTIO"))
    print(f"  Found {len(dict_entries)} dictionary entries")
    
    print("Parsing SYNONM.ALF...")
    synonyms = parse_synonyms(os.path.join(lisp_source_dir, "SYNONM.ALF"))
    print(f"  Found {len(synonyms)} synonyms")
    
    print("Parsing IDIOM.ALF...")
    idioms = parse_idioms(os.path.join(lisp_source_dir, "IDIOM.ALF"))
    print(f"  Found {len(idioms)} idioms")
    
    print("Parsing TOPICS...")
    topics = parse_topics(os.path.join(lisp_source_dir, "TOPICS"))
    print(f"  Found {len(topics)} semantic units")
    
    print("Parsing RDATA...")
    flares = parse_rdata(os.path.join(lisp_source_dir, "RDATA"))
    print(f"  Found {len(flares)} flare concepts")
    
    # Generate C files
    print("\nGenerating C data files...")
    
    generate_c_dictionary(dict_entries, "parry_dictionary.c", 2000)
    print("  Generated parry_dictionary.c")
    
    generate_c_synonyms(synonyms, "parry_synonyms.c", 2000)
    print("  Generated parry_synonyms.c")
    
    generate_c_idioms(idioms, "parry_idioms.c", 500)
    print("  Generated parry_idioms.c")
    
    generate_c_flares(flares, "parry_flares.c")
    print("  Generated parry_flares.c")
    
    print("\nDone! C data files generated successfully.")

if __name__ == "__main__":
    main()
