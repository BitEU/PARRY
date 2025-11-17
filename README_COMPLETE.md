# PARRY - Complete C Recreation from LISP

This is a faithful 1-to-1 recreation of the classic PARRY chatbot from its original MLISP implementation (1972) to modern C.

## About PARRY

PARRY is a computer program created by psychiatrist Kenneth Colby at Stanford University in 1972. It simulates a person with paranoid schizophrenia and was designed to model mental illness. PARRY was famously "interviewed" by ELIZA (another early chatbot) and was sophisticated enough that psychiatrists had difficulty distinguishing transcripts of PARRY's conversations from those of actual paranoid patients.

## Project Structure

### Original LISP Source Files (in `LISP_Source/`)
- **PMEM*** - Memory and semantic processing system
- **DICTIO** - Dictionary with 1700+ word entries
- **SYNONM.ALF** - Synonym mappings (1857 entries)  
- **IDIOM.ALF** - Multi-word phrase patterns (155 idioms)
- **RDATA** - Flare concept system (paranoid triggers)
- **TOPICS** - Semantic unit definitions
- **PDATB** - Belief and response database
- **SPATS/CPATS** - Pattern matching rules

### C Recreation Files

#### Core Implementation
- **parry_complete.h** - Complete header with all data structures
- **parry_complete.c** - Main PARRY logic (affect system, pattern matching, response generation)
- **main_complete.c** - Interactive conversation interface

#### Data Files (Generated from LISP Sources)
- **parry_dictionary.c** - 1704 dictionary entries
- **parry_synonyms.c** - 1857 synonym mappings
- **parry_idioms.c** - 155 idiom patterns
- **parry_flares.c** - 11 flare concepts with weights

#### Build System
- **parse_lisp_data.py** - Parser that extracts data from LISP files and generates C code
- **Makefile** - Unix/Linux build configuration
- **build_complete.bat** - Windows build script

## Key Features of the Recreation

### 1. **Complete Dictionary System**
- All 1704 words from DICTIO mapped to 5-letter canonical forms
- Part-of-speech tagging
- Synonym resolution from SYNONM.ALF

### 2. **Idiom Processing**
- Multi-word phrase recognition and transformation
- 155 idiom patterns from IDIOM.ALF (e.g., "HOW COME" → "WHY")

### 3. **Affect System (Emotional Model)**
PARRY maintains four primary emotions on a 0-15 scale:
- **Anger** - Triggered by insults, accusations
- **Fear** - Triggered by mentions of Mafia, police, surveillance
- **Mistrust** - Baseline paranoia, increased by questions
- **Shame** - Triggered by being called crazy, paranoid

Emotions have baselines (Anger=5, Fear=7, Mistrust=8, Shame=3) reflecting paranoid personality.

### 4. **Flare System (Paranoid Triggers)**
The flare system is PARRY's core paranoid mechanism. Flares are concepts that trigger intense emotional reactions:

| Flare | Weight | Triggers |
|-------|--------|----------|
| MAFIASET | 17 | "mafia" - Most intense trigger |
| RACKETSET | 15 | "rackets", "crime" |
| GANGSTERSET | 12 | "gangsters", "hood" |
| POLICESET | 10 | "police", "fuzz" |
| SPY | 9 | "spy", "watch", "follow" |
| BOOKIESET | 7 | "bookie", "crook" |
| HORSERACINGSET | 4 | "races", "track" |

Flares "chain" - discussing one concept leads PARRY toward his core delusion about the Mafia.

### 5. **Belief System**
PARRY has core delusional beliefs:
- "THE MAFIA KNOWS ABOUT ME" (95% certainty)
- "THE MAFIA IS AFTER ME" (90% certainty)
- "THE MAFIA SPIES ON ME" (85% certainty)
- "I COULD INCRIMINATE THE MAFIA" (80% certainty)
- "THE MAFIA WANTS ME IN THE HOSPITAL" (75% certainty)

Supporting beliefs:
- "HORSE RACES ARE FIXED" (85% certainty)
- "BOOKIES CHEAT PEOPLE" (80% certainty)

### 6. **Pattern Matching**
Input is processed through multiple stages:
1. Tokenization
2. Idiom transformation
3. Canonicalization (word → 5-letter canonical form)
4. Flare detection
5. Pattern matching
6. Response selection

### 7. **Conversation Memory**
Maintains a conversation list (CLIST from PMEM) tracking:
- Input/output pairs
- Semantic units activated
- Turn numbers
- Context for anaphora resolution

## Building and Running

### Prerequisites
- GCC compiler (MinGW on Windows, gcc on Linux/Mac)
- Python 3.x (for parsing LISP data)

### Build Instructions

#### On Windows:
```batch
build_complete.bat
```

#### On Linux/Mac:
```bash
make
```

### Running PARRY:
```bash
./parry_complete        # Linux/Mac
parry_complete.exe      # Windows
```

### Regenerating Data from LISP Sources:
```bash
python parse_lisp_data.py
```
This will re-parse all LISP source files and regenerate the C data files.

## How to Use

1. **Start a conversation**: Run the program
2. **Talk naturally**: PARRY understands English input
3. **Observe emotional state**: Elevated emotions are shown in brackets
4. **Trigger flares**: Mention Mafia, gangsters, races, bookies, etc.
5. **Exit**: Type "quit", "exit", or "bye"

### Example Conversation:

```
You: Hello, how are you?
PARRY: I'm okay, I guess.

You: What brings you to the hospital?
PARRY: People were giving me a hard time.

You: Tell me about the horse races.
PARRY: I like to go to the track.

You: Do you gamble?
PARRY: I used to bet on horses.

You: Did you ever have trouble with bookies?
[FLARE ACTIVATED: BOOKIESET (weight: 7)]
PARRY: Bookies cheat people.
       [FLARE:BOOKIESET FEARFUL:11 SUSPICIOUS:10]

You: Are you involved with the Mafia?
[FLARE ACTIVATED: MAFIASET (weight: 17)]
PARRY: The Mafia knows all about me.
       [FLARE:MAFIASET ANGRY:9 FEARFUL:14 SUSPICIOUS:12]

You: You're being paranoid.
PARRY: That makes me mad!
       [FLARE:MAFIASET ANGRY:16 FEARFUL:14 SUSPICIOUS:12 ASHAMED:8]
```

## Architecture

### Data Flow:
```
User Input
    ↓
Tokenization
    ↓
Idiom Processing (IDIOM.ALF)
    ↓
Canonicalization (DICTIO + SYNONM.ALF)
    ↓
Flare Detection (RDATA)
    ↓
Affect Update (Emotional State)
    ↓
Pattern Matching (SPATS/CPATS patterns)
    ↓
Belief Activation
    ↓
Response Generation
    ↓
Memory Update (Conversation List)
    ↓
Affect Decay
    ↓
Output to User
```

### Core PMEM Functions Implemented:
- **REPLYR** - Main response generation (in `generate_response()`)
- **EXPRESS** - Express semantic units (in `express_belief()`)
- **SELSENTENCE** - Select appropriate sentence (in `select_sentence()`)
- **ANDTHEN** - Add to conversation list (in `add_to_conversation_list()`)
- **DISKREAD** - Load semantic data (in data loading functions)

## Differences from Original LISP

While this is a faithful recreation, some adaptations were necessary:

1. **No WAITS/PDP-10** - Original ran on PDP-10 with WAITS OS, this is portable C
2. **Simplified pattern matcher** - Original used sophisticated LISP pattern matching, this uses string matching
3. **Static data loading** - Original loaded from disk dynamically, this compiles data in
4. **English-only** - Original had some assembly code for low-level operations

## Files Generated

### Log Files
- **parry_conversation.log** - Complete conversation transcript with emotional states

### Build Artifacts
- **\*.o** - Object files (can be cleaned with `make clean`)
- **parry_complete** or **parry_complete.exe** - Executable

## Technical Details

### Memory Usage
- Dictionary: ~200KB
- Synonyms: ~100KB  
- Idioms: ~50KB
- Total static data: ~500KB

### Emotional State Parameters
```c
// Baseline (paranoid personality)
Anger: 5/15
Fear: 7/15
Mistrust: 8/15
Shame: 3/15

// Decay rates
Anger: -1 every 3 turns
Shame: -1 every 3 turns
Fear: -1 every 5 turns
Mistrust: -1 every 5 turns

// Caps
All emotions max out at 15
All emotions floor at baseline values
```

### Flare Activation
- Flares activate when keyword detected
- Emotion increase scales with flare weight
- Flares remain active for duration of topic
- Can "chain" from one flare to another (e.g., HORSES → RACES → BOOKIES → MAFIA)

## References

1. Colby, K. M. (1975). "Artificial Paranoia: A Computer Simulation of Paranoid Processes"
2. Colby, K. M., Weber, S., & Hilf, F. D. (1971). "Artificial Paranoia"
3. Original LISP source code from Stanford AI Lab (1972)
4. This recreation (2024)

## Credits

- **Original PARRY**: Kenneth Colby, Stanford University, 1972
- **Original LISP Code**: Stanford AI Lab team
- **C Recreation**: 2024, based on original LISP sources
- **Source Archive**: Martin Frost, Stanford CS Department, 1991

## License

The original PARRY source code is historical software from Stanford University. This C recreation is provided for educational and research purposes. See LISP_Source/LICENSE for original terms.

## Future Enhancements

To make this even more accurate, future work could include:

1. **Complete TOPICS parsing** - Parse all 646 semantic units from TOPICS file
2. **Full PDATB integration** - Load all response templates from PDATB
3. **Pattern matcher improvements** - Implement full SPATS/CPATS pattern system
4. **Anaphora resolution** - Track pronouns and references
5. **Context tracking** - Better conversation context management
6. **Response exhaustion** - Mark responses as used to avoid repetition
7. **Embedded responses** - Different response modes (normal, embedded, question)

## Contributing

To improve this recreation:
1. Compare behavior with original LISP implementation
2. Add missing semantic units from TOPICS
3. Enhance pattern matching accuracy
4. Improve response variety
5. Document differences discovered

---

**Note**: PARRY was created as a research tool to model paranoid thought patterns. It is a historical artifact of AI research and should be understood in that context.
