#include "parry_complete.h"

// Global data structures
DictEntry dictionary[MAX_DICT_ENTRIES];
Synonym synonyms[MAX_SYNONYMS];
Idiom idioms[MAX_IDIOMS];
SemanticUnit semantic_units[MAX_SEMUNITS];
FlareConcept flare_concepts[MAX_FLARES];
Pattern patterns[MAX_PATTERNS];
Response responses[MAX_RESPONSES];
Belief beliefs[MAX_BELIEFS];
ConversationEntry conversation_list[MAX_MEMORY_ITEMS];

int dict_count = 0;
int synonym_count = 0;
int idiom_count = 0;
int semantic_unit_count = 0;
int flare_count = 0;
int pattern_count = 0;
int response_count = 0;
int belief_count = 0;
int conversation_count = 0;

EmotionalState parry_state;

// Forward declarations for external loaders
extern void load_dictionary(void);
extern void load_synonyms(void);
extern void load_idioms(void);
extern void load_flare_system(void);

// Core initialization
void init_parry(void) {
    // Initialize emotional state - PARRY has paranoid baseline
    parry_state.anger = 5;
    parry_state.fear = 7;
    parry_state.mistrust = 8;
    parry_state.shame = 3;
    
    parry_state.anger0 = 5;
    parry_state.fear0 = 7;
    parry_state.mistrust0 = 8;
    parry_state.shame0 = 3;
    
    parry_state.flare_active = false;
    SAFE_STRCPY(parry_state.current_flare, "NONE", MAX_WORD_LENGTH);
    parry_state.flare_intensity = 0;
    
    SAFE_STRCPY(parry_state.current_topic, "GENERAL", MAX_WORD_LENGTH);
    parry_state.conversation_turn = 0;
    parry_state.silence_count = 0;
    
    parry_state.interview_mode = true;
    parry_state.last_output_unit = 0;
    parry_state.last_input_unit = 0;
    
    // Initialize random seed
    srand((unsigned int)time(NULL));
    
    // Load all data from generated files
    printf("Loading PARRY data structures...\n");
    load_dictionary();
    load_synonyms();
    load_idioms();
    load_flare_system();
    load_beliefs();
    load_patterns();
    
    printf("\nPARRY initialized successfully.\n");
    printf("Emotional baseline: Anger=%d, Fear=%d, Mistrust=%d, Shame=%d\n",
           parry_state.anger0, parry_state.fear0, parry_state.mistrust0, parry_state.shame0);
}

// Load core beliefs (PARRY's delusional system)
void load_beliefs(void) {
    belief_count = 0;
    
    // Core delusion: Mafia is after him
    SAFE_STRCPY(beliefs[belief_count].belief_text, "THE MAFIA KNOWS ABOUT ME", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 1010;
    beliefs[belief_count].truth_value = 95;
    beliefs[belief_count].is_core_delusion = true;
    belief_count++;
    
    SAFE_STRCPY(beliefs[belief_count].belief_text, "THE MAFIA IS AFTER ME", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 1020;
    beliefs[belief_count].truth_value = 90;
    beliefs[belief_count].is_core_delusion = true;
    belief_count++;
    
    SAFE_STRCPY(beliefs[belief_count].belief_text, "THE MAFIA SPIES ON ME", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 1050;
    beliefs[belief_count].truth_value = 85;
    beliefs[belief_count].is_core_delusion = true;
    belief_count++;
    
    SAFE_STRCPY(beliefs[belief_count].belief_text, "I COULD INCRIMINATE THE MAFIA", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 1080;
    beliefs[belief_count].truth_value = 80;
    beliefs[belief_count].is_core_delusion = true;
    belief_count++;
    
    SAFE_STRCPY(beliefs[belief_count].belief_text, "THE MAFIA WANTS ME IN THE HOSPITAL", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 1110;
    beliefs[belief_count].truth_value = 75;
    beliefs[belief_count].is_core_delusion = true;
    belief_count++;
    
    // Supporting beliefs
    SAFE_STRCPY(beliefs[belief_count].belief_text, "HORSE RACES ARE FIXED", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 972;
    beliefs[belief_count].truth_value = 85;
    beliefs[belief_count].is_core_delusion = false;
    belief_count++;
    
    SAFE_STRCPY(beliefs[belief_count].belief_text, "BOOKIES CHEAT PEOPLE", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 920;
    beliefs[belief_count].truth_value = 80;
    beliefs[belief_count].is_core_delusion = false;
    belief_count++;
    
    SAFE_STRCPY(beliefs[belief_count].belief_text, "THE MAFIA CONTROLS RACKETS", MAX_INPUT_LENGTH);
    beliefs[belief_count].unit_id = 880;
    beliefs[belief_count].truth_value = 90;
    beliefs[belief_count].is_core_delusion = false;
    belief_count++;
    
    printf("Loaded %d beliefs\n", belief_count);
}

// Load patterns for input matching
void load_patterns(void) {
    pattern_count = 0;
    
    // Greeting patterns
    SAFE_STRCPY(patterns[pattern_count].pattern, "hello hi howdy", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 42;
    patterns[pattern_count].priority = 10;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    // Mafia-related patterns (high priority)
    SAFE_STRCPY(patterns[pattern_count].pattern, "mafia", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 1010;
    patterns[pattern_count].priority = 20;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    SAFE_STRCPY(patterns[pattern_count].pattern, "gangster hood mob", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 860;
    patterns[pattern_count].priority = 18;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    SAFE_STRCPY(patterns[pattern_count].pattern, "spy follow watch", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 1050;
    patterns[pattern_count].priority = 19;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    // Race track / gambling patterns
    SAFE_STRCPY(patterns[pattern_count].pattern, "race track horse", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 970;
    patterns[pattern_count].priority = 15;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    SAFE_STRCPY(patterns[pattern_count].pattern, "bookie bookmaker", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 920;
    patterns[pattern_count].priority = 16;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    SAFE_STRCPY(patterns[pattern_count].pattern, "gamble bet", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 940;
    patterns[pattern_count].priority = 14;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    // Hospital patterns
    SAFE_STRCPY(patterns[pattern_count].pattern, "hospital ward", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 50;
    patterns[pattern_count].priority = 12;
    patterns[pattern_count].requires_context = false;
    pattern_count++;
    
    // Question patterns  
    SAFE_STRCPY(patterns[pattern_count].pattern, "why", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 30;
    patterns[pattern_count].priority = 5;
    patterns[pattern_count].requires_context = true;
    pattern_count++;
    
    SAFE_STRCPY(patterns[pattern_count].pattern, "how", MAX_INPUT_LENGTH);
    patterns[pattern_count].semantic_unit_id = 31;
    patterns[pattern_count].priority = 5;
    patterns[pattern_count].requires_context = true;
    pattern_count++;
    
    printf("Loaded %d patterns\n", pattern_count);
}

// Utility: random integer
int random_int(int max) {
    return rand() % max;
}

// Utility: convert to lowercase
void to_lower(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

// Utility: strip punctuation
void strip_punctuation(char* str) {
    int len = strlen(str);
    while (len > 0 && !isalnum((unsigned char)str[len-1])) {
        str[len-1] = '\0';
        len--;
    }
    
    // Also strip leading punctuation
    int start = 0;
    while (str[start] && !isalnum((unsigned char)str[start])) {
        start++;
    }
    if (start > 0) {
        memmove(str, str + start, strlen(str + start) + 1);
    }
}

// Utility: check if input is a question
bool is_question(const char* input) {
    if (strchr(input, '?') != NULL) return true;
    
    char lower_input[MAX_INPUT_LENGTH];
    SAFE_STRCPY(lower_input, input, MAX_INPUT_LENGTH);
    to_lower(lower_input);
    
    if (strstr(lower_input, "why") || strstr(lower_input, "what") ||
        strstr(lower_input, "when") || strstr(lower_input, "where") ||
        strstr(lower_input, "who") || strstr(lower_input, "how") ||
        strstr(lower_input, "which")) {
        return true;
    }
    
    return false;
}

// Lookup canonical form of word
char* lookup_canonical(const char* word) {
    static char canonical[MAX_WORD_LENGTH];
    char lower_word[MAX_WORD_LENGTH];
    
    SAFE_STRCPY(lower_word, word, MAX_WORD_LENGTH);
    to_lower(lower_word);
    
    // First check synonyms
    for (int i = 0; i < synonym_count; i++) {
        if (strcmp(lower_word, synonyms[i].word) == 0) {
            SAFE_STRCPY(canonical, synonyms[i].synonym, MAX_WORD_LENGTH);
            return canonical;
        }
    }
    
    // Then check dictionary
    for (int i = 0; i < dict_count; i++) {
        if (strcmp(lower_word, dictionary[i].word) == 0) {
            SAFE_STRCPY(canonical, dictionary[i].canonical, MAX_WORD_LENGTH);
            return canonical;
        }
    }
    
    // If not found, return uppercase version (5 chars max)
    SAFE_STRCPY(canonical, word, MAX_WORD_LENGTH);
    for (int i = 0; canonical[i] && i < 5; i++) {
        canonical[i] = toupper((unsigned char)canonical[i]);
    }
    canonical[5] = '\0';
    
    return canonical;
}

// Lookup synonym
char* lookup_synonym(const char* word) {
    static char syn[MAX_WORD_LENGTH];
    char lower_word[MAX_WORD_LENGTH];
    
    SAFE_STRCPY(lower_word, word, MAX_WORD_LENGTH);
    to_lower(lower_word);
    
    for (int i = 0; i < synonym_count; i++) {
        if (strcmp(lower_word, synonyms[i].word) == 0) {
            SAFE_STRCPY(syn, synonyms[i].synonym, MAX_WORD_LENGTH);
            return syn;
        }
    }
    
    return NULL;
}

// Tokenize input into words
void tokenize_input(const char* input, char words[][MAX_WORD_LENGTH], int* word_count) {
    char temp_input[MAX_INPUT_LENGTH];
    SAFE_STRCPY(temp_input, input, MAX_INPUT_LENGTH);
    
    *word_count = 0;
    char* saveptr;
    char* token = strtok(temp_input, " \t\n\r,.!?;:");
    
    while (token != NULL && *word_count < MAX_WORDS) {
        SAFE_STRCPY(words[*word_count], token, MAX_WORD_LENGTH);
        to_lower(words[*word_count]);
        strip_punctuation(words[*word_count]);
        
        if (strlen(words[*word_count]) > 0) {
            (*word_count)++;
        }
        
        token = strtok(NULL, " \t\n\r,.!?;:");
    }
}

// Apply idiom transformations
void apply_idioms(char words[][MAX_WORD_LENGTH], int* word_count) {
    // Check for multi-word idioms and replace them
    for (int i = 0; i < idiom_count; i++) {
        char pattern_words[MAX_WORDS][MAX_WORD_LENGTH];
        int pattern_word_count = 0;
        
        char temp_pattern[MAX_INPUT_LENGTH];
        SAFE_STRCPY(temp_pattern, idioms[i].pattern, MAX_INPUT_LENGTH);
        
        char* token = strtok(temp_pattern, " ");
        while (token != NULL && pattern_word_count < MAX_WORDS) {
            SAFE_STRCPY(pattern_words[pattern_word_count], token, MAX_WORD_LENGTH);
            pattern_word_count++;
            token = strtok(NULL, " ");
        }
        
        // Try to match this idiom in the input
        for (int j = 0; j <= *word_count - pattern_word_count; j++) {
            bool match = true;
            for (int k = 0; k < pattern_word_count; k++) {
                if (strcmp(words[j + k], pattern_words[k]) != 0) {
                    match = false;
                    break;
                }
            }
            
            if (match) {
                // Replace matched words with replacement
                SAFE_STRCPY(words[j], idioms[i].replacement, MAX_WORD_LENGTH);
                
                // Shift remaining words
                for (int k = j + 1; k < *word_count - pattern_word_count + 1; k++) {
                    SAFE_STRCPY(words[k], words[k + pattern_word_count - 1], MAX_WORD_LENGTH);
                }
                *word_count -= (pattern_word_count - 1);
                break;
            }
        }
    }
}

// Canonicalize words using dictionary
void canonicalize_words(char words[][MAX_WORD_LENGTH], int word_count) {
    for (int i = 0; i < word_count; i++) {
        char* canonical = lookup_canonical(words[i]);
        if (canonical) {
            SAFE_STRCPY(words[i], canonical, MAX_WORD_LENGTH);
        }
    }
}

// Check for flare activation
void check_flares(char words[][MAX_WORD_LENGTH], int word_count) {
    int highest_weight = -1;
    int best_flare_idx = -1;
    
    for (int i = 0; i < word_count; i++) {
        for (int f = 0; f < flare_count; f++) {
            // Check if word matches flare concept name
            char flare_name_lower[MAX_WORD_LENGTH];
            SAFE_STRCPY(flare_name_lower, flare_concepts[f].name, MAX_WORD_LENGTH);
            to_lower(flare_name_lower);
            
            char word_lower[MAX_WORD_LENGTH];
            SAFE_STRCPY(word_lower, words[i], MAX_WORD_LENGTH);
            to_lower(word_lower);
            
            // Match if word contains part of flare name
            if (strstr(flare_name_lower, word_lower) || strstr(word_lower, "mafia") ||
                (strcmp(word_lower, "gangster") == 0 && strstr(flare_name_lower, "gangster")) ||
                (strcmp(word_lower, "race") == 0 && strstr(flare_name_lower, "race")) ||
                (strcmp(word_lower, "bookie") == 0 && strstr(flare_name_lower, "bookie"))) {
                
                if (flare_concepts[f].weight > highest_weight) {
                    highest_weight = flare_concepts[f].weight;
                    best_flare_idx = f;
                }
            }
        }
    }
    
    if (best_flare_idx >= 0) {
        parry_state.flare_active = true;
        SAFE_STRCPY(parry_state.current_flare, flare_concepts[best_flare_idx].name, MAX_WORD_LENGTH);
        parry_state.flare_intensity = highest_weight;
        
        // Intensify emotions based on flare
        if (highest_weight >= 15) {
            parry_state.fear += 4;
            parry_state.mistrust += 3;
            parry_state.anger += 2;
        } else if (highest_weight >= 10) {
            parry_state.fear += 3;
            parry_state.mistrust += 2;
            parry_state.anger += 2;
        } else {
            parry_state.fear += 2;
            parry_state.mistrust += 1;
        }
        
        printf("[FLARE ACTIVATED: %s (weight: %d)]\n", 
               parry_state.current_flare, highest_weight);
    }
}

// Update affect (emotional state)
void update_affect(char words[][MAX_WORD_LENGTH], int word_count) {
    // Scan for emotionally charged words
    for (int i = 0; i < word_count; i++) {
        char* word = words[i];
        
        // Paranoid triggers
        if (strcmp(word, "MAFIA") == 0 || strcmp(word, "MOB") == 0) {
            parry_state.fear += 4;
            parry_state.anger += 3;
            parry_state.mistrust += 2;
        }
        else if (strcmp(word, "SPY") == 0 || strcmp(word, "WATCH") == 0 || 
                 strcmp(word, "FOLLO") == 0) {
            parry_state.fear += 3;
            parry_state.mistrust += 3;
        }
        else if (strcmp(word, "LIAR") == 0 || strcmp(word, "LIE") == 0 ||
                 strcmp(word, "LYING") == 0) {
            parry_state.anger += 5;
            parry_state.shame += 2;
        }
        else if (strcmp(word, "CRAZY") == 0 || strcmp(word, "INSAN") == 0 ||
                 strcmp(word, "NUTS") == 0) {
            parry_state.anger += 6;
            parry_state.shame += 3;
        }
        else if (strcmp(word, "PARAN") == 0) {
            parry_state.anger += 7;  // Ultimate insult
            parry_state.shame += 4;
        }
        else if (strcmp(word, "FUZZ") == 0 || strcmp(word, "COP") == 0 ||
                 strcmp(word, "POLIC") == 0) {
            parry_state.fear += 2;
            parry_state.mistrust += 2;
        }
        else if (strcmp(word, "RACE") == 0 || strcmp(word, "TRACK") == 0 ||
                 strcmp(word, "HORSE") == 0) {
            // Shift to delusion topic
            SAFE_STRCPY(parry_state.current_topic, "RACES", MAX_WORD_LENGTH);
        }
        else if (strcmp(word, "WHY") == 0 || strcmp(word, "WHAT") == 0 ||
                 strcmp(word, "WHERE") == 0) {
            parry_state.mistrust += 1;  // Questions make PARRY suspicious
        }
    }
}

// Affect decay - emotions gradually return to baseline
void affect_decay(void) {
    if (parry_state.conversation_turn % 3 == 0) {
        if (parry_state.anger > parry_state.anger0) {
            parry_state.anger -= 1;
        }
        if (parry_state.shame > parry_state.shame0) {
            parry_state.shame -= 1;
        }
    }
    
    // Fear and mistrust decay more slowly
    if (parry_state.conversation_turn % 5 == 0) {
        if (parry_state.fear > parry_state.fear0) {
            parry_state.fear -= 1;
        }
        if (parry_state.mistrust > parry_state.mistrust0) {
            parry_state.mistrust -= 1;
        }
    }
    
    // Cap at 15
    if (parry_state.anger > 15) parry_state.anger = 15;
    if (parry_state.fear > 15) parry_state.fear = 15;
    if (parry_state.mistrust > 15) parry_state.mistrust = 15;
    if (parry_state.shame > 15) parry_state.shame = 15;
}

// Pattern matching
int match_patterns(char words[][MAX_WORD_LENGTH], int word_count) {
    int best_match = -1;
    int best_score = -1;
    
    for (int p = 0; p < pattern_count; p++) {
        char pattern_words[MAX_WORDS][MAX_WORD_LENGTH];
        int pattern_word_count = 0;
        
        char temp_pattern[MAX_INPUT_LENGTH];
        SAFE_STRCPY(temp_pattern, patterns[p].pattern, MAX_INPUT_LENGTH);
        
        char* token = strtok(temp_pattern, " ");
        while (token != NULL && pattern_word_count < MAX_WORDS) {
            SAFE_STRCPY(pattern_words[pattern_word_count], token, MAX_WORD_LENGTH);
            to_lower(pattern_words[pattern_word_count]);
            pattern_word_count++;
            token = strtok(NULL, " ");
        }
        
        // Count matches
        int matches = 0;
        for (int pw = 0; pw < pattern_word_count; pw++) {
            for (int iw = 0; iw < word_count; iw++) {
                char word_lower[MAX_WORD_LENGTH];
                SAFE_STRCPY(word_lower, words[iw], MAX_WORD_LENGTH);
                to_lower(word_lower);
                
                if (strcmp(pattern_words[pw], word_lower) == 0) {
                    matches++;
                    break;
                }
            }
        }
        
        if (matches > 0) {
            int score = patterns[p].priority * matches;
            if (score > best_score) {
                best_score = score;
                best_match = p;
            }
        }
    }
    
    return best_match;
}

// Generate response based on semantic unit
char* generate_response(int semantic_unit_id) {
    static char response[MAX_INPUT_LENGTH];
    
    // Find belief associated with this unit
    for (int i = 0; i < belief_count; i++) {
        if (beliefs[i].unit_id == semantic_unit_id) {
            return express_belief(i);
        }
    }
    
    // Default responses based on emotional state
    if (parry_state.anger > 10) {
        static char* angry_responses[] = {
            "That makes me mad!",
            "I don't like that!",
            "Why are you saying that?",
            "You're trying to upset me!",
            "I'm getting angry!",
            "Don't push me!"
        };
        return angry_responses[random_int(6)];
    }
    else if (parry_state.fear > 10) {
        static char* fear_responses[] = {
            "That worries me.",
            "I don't like this.",
            "That makes me nervous.",
            "Let's talk about something else.",
            "I'd rather not discuss that.",
            "That scares me."
        };
        return fear_responses[random_int(6)];
    }
    else if (parry_state.mistrust > 11) {
        static char* mistrust_responses[] = {
            "I don't trust what you're saying.",
            "How do I know you're telling the truth?",
            "That sounds suspicious.",
            "You're trying to trick me.",
            "I'm not buying that.",
            "Why should I believe you?"
        };
        return mistrust_responses[random_int(6)];
    }
    else {
        static char* neutral_responses[] = {
            "I see.",
            "Uh huh.",
            "Is that so?",
            "Maybe.",
            "I suppose.",
            "Go on.",
            "What else?",
            "If you say so."
        };
        return neutral_responses[random_int(8)];
    }
}

// Express a belief
char* express_belief(int belief_id) {
    static char expression[MAX_INPUT_LENGTH];
    
    if (belief_id < 0 || belief_id >= belief_count) {
        return "I don't know about that.";
    }
    
    Belief* b = &beliefs[belief_id];
    
    // Responses for core delusions
    if (b->unit_id == 1010) {  // Mafia knows about me
        static char* responses[] = {
            "The Mafia knows all about me.",
            "They know who I am.",
            "The underworld has information about me.",
            "The Mob knows about me."
        };
        return responses[random_int(4)];
    }
    else if (b->unit_id == 1020) {  // Mafia is after me
        static char* responses[] = {
            "They're after me.",
            "The Mafia is out to get me.",
            "I'm being pursued by the underworld.",
            "They want to get me."
        };
        return responses[random_int(4)];
    }
    else if (b->unit_id == 1050) {  // Mafia spies on me
        static char* responses[] = {
            "They spy on me.",
            "The Mafia has people watching me.",
            "I'm being followed.",
            "They keep tabs on me."
        };
        return responses[random_int(4)];
    }
    else if (b->unit_id == 1080) {  // Could incriminate Mafia
        static char* responses[] = {
            "I know things that could hurt them.",
            "I could incriminate them.",
            "I have information about their operations.",
            "What I know could damage them."
        };
        return responses[random_int(4)];
    }
    else if (b->unit_id == 1110) {  // Mafia wants me in hospital
        static char* responses[] = {
            "They want me in the hospital.",
            "The Mafia wants me locked up.",
            "They're trying to get me committed.",
            "They want me out of the way."
        };
        return responses[random_int(4)];
    }
    else if (b->unit_id == 972) {  // Races are fixed
        static char* responses[] = {
            "The races are fixed.",
            "Horse racing is crooked.",
            "They fix the races.",
            "The track is rigged."
        };
        return responses[random_int(4)];
    }
    else if (b->unit_id == 920) {  // Bookies cheat
        static char* responses[] = {
            "Bookies cheat people.",
            "The bookmakers are crooks.",
            "They don't pay off.",
            "Bookies are dishonest."
        };
        return responses[random_int(4)];
    }
    else {
        SAFE_STRCPY(expression, b->belief_text, MAX_INPUT_LENGTH);
        to_lower(expression);
        // Capitalize first letter
        expression[0] = toupper((unsigned char)expression[0]);
        return expression;
    }
}

// Select sentence from semantic unit
char* select_sentence(int unit_id, const char* mode) {
    // Find semantic unit
    for (int i = 0; i < semantic_unit_count; i++) {
        if (semantic_units[i].unit_id == unit_id) {
            if (strcmp(mode, "NORMAL") == 0 && semantic_units[i].normal_count > 0) {
                int idx = random_int(semantic_units[i].normal_count);
                return semantic_units[i].normal_responses[idx];
            }
            else if (strcmp(mode, "EMBEDDED") == 0 && semantic_units[i].embedded_count > 0) {
                int idx = random_int(semantic_units[i].embedded_count);
                return semantic_units[i].embedded_responses[idx];
            }
        }
    }
    
    return NULL;
}

// Add entry to conversation list
void add_to_conversation_list(const char* direction, int unit_id, const char* text) {
    if (conversation_count < MAX_MEMORY_ITEMS) {
        SAFE_STRCPY(conversation_list[conversation_count].direction, direction, 4);
        conversation_list[conversation_count].semantic_unit = unit_id;
        SAFE_STRCPY(conversation_list[conversation_count].text, text, MAX_INPUT_LENGTH);
        conversation_list[conversation_count].turn_number = parry_state.conversation_turn;
        conversation_count++;
    }
}

// Update memory
void update_memory(const char* input, const char* response) {
    add_to_conversation_list("IN", parry_state.last_input_unit, input);
    add_to_conversation_list("OUT", parry_state.last_output_unit, response);
}

// Main input processor
char* process_input(const char* input) {
    static char response[MAX_INPUT_LENGTH];
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int word_count = 0;
    
    parry_state.conversation_turn++;
    
    // Step 1: Tokenize
    tokenize_input(input, words, &word_count);
    
    // Step 2: Apply idiom transformations
    apply_idioms(words, &word_count);
    
    // Step 3: Canonicalize
    canonicalize_words(words, word_count);
    
    // Step 4: Check flares
    check_flares(words, word_count);
    
    // Step 5: Update affect
    update_affect(words, word_count);
    
    // Step 6: Match patterns
    int matched_pattern = match_patterns(words, word_count);
    
    // Step 7: Generate response
    char* resp = NULL;
    if (matched_pattern >= 0) {
        int sem_unit = patterns[matched_pattern].semantic_unit_id;
        parry_state.last_output_unit = sem_unit;
        resp = generate_response(sem_unit);
    } else {
        resp = generate_response(-1);
    }
    
    SAFE_STRCPY(response, resp, MAX_INPUT_LENGTH);
    
    // Step 8: Update memory
    update_memory(input, response);
    
    // Step 9: Affect decay
    affect_decay();
    
    return response;
}

// Save conversation log
void save_conversation_log(const char* input, const char* response) {
    static FILE* log_file = NULL;
    
    if (!log_file) {
        log_file = fopen("parry_conversation.log", "a");
    }
    
    if (log_file) {
        time_t now = time(NULL);
        char* time_str = ctime(&now);
        time_str[strlen(time_str)-1] = '\0';  // Remove newline
        
        fprintf(log_file, "[%s Turn %d]\n", time_str, parry_state.conversation_turn);
        fprintf(log_file, "User: %s\n", input);
        fprintf(log_file, "PARRY: %s\n", response);
        fprintf(log_file, "Affect: Anger=%d Fear=%d Mistrust=%d Shame=%d\n",
                parry_state.anger, parry_state.fear, parry_state.mistrust, parry_state.shame);
        if (parry_state.flare_active) {
            fprintf(log_file, "Flare: %s (intensity=%d)\n", 
                    parry_state.current_flare, parry_state.flare_intensity);
        }
        fprintf(log_file, "\n");
        fflush(log_file);
    }
}

// Debug print state
void debug_print_state(void) {
    printf("\n=== PARRY STATE ===\n");
    printf("Turn: %d\n", parry_state.conversation_turn);
    printf("Anger: %d/%d\n", parry_state.anger, parry_state.anger0);
    printf("Fear: %d/%d\n", parry_state.fear, parry_state.fear0);
    printf("Mistrust: %d/%d\n", parry_state.mistrust, parry_state.mistrust0);
    printf("Shame: %d/%d\n", parry_state.shame, parry_state.shame0);
    printf("Flare: %s (%s, intensity=%d)\n", 
           parry_state.flare_active ? "ACTIVE" : "inactive",
           parry_state.current_flare, parry_state.flare_intensity);
    printf("Topic: %s\n", parry_state.current_topic);
    printf("==================\n\n");
}
