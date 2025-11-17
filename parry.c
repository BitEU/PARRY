#include "parry.h"

// Global variables
EmotionalState parry_state;
Synonym synonyms[1000];
Pattern patterns[MAX_PATTERNS];
Response responses[MAX_RESPONSES];
Flare flares[MAX_FLARES];
MemoryItem memory[MAX_MEMORY_ITEMS];
DictEntry dictionary[2000];

int synonym_count = 0;
int pattern_count = 0;
int response_count = 0;
int flare_count = 0;
int memory_count = 0;
int dict_count = 0;

void init_parry(void) {
    // Initialize emotional state (paranoid baseline)
    parry_state.anger = 5;
    parry_state.fear = 7;
    parry_state.mistrust = 8;
    parry_state.hurt = 3;
    parry_state.anger0 = 5;
    parry_state.fear0 = 7;
    parry_state.mistrust0 = 8;
    parry_state.hurt0 = 3;
    parry_state.flare_active = false;
    SAFE_STRCPY(parry_state.current_flare, "NONE", MAX_WORD_LENGTH);
    SAFE_STRCPY(parry_state.current_topic, "GENERAL", MAX_WORD_LENGTH);
    parry_state.conversation_turn = 0;
    
    // Initialize random seed
    srand((unsigned int)time(NULL));
    
    // Load all data
    load_data_files();
    
    printf("PARRY initialized. Emotional state: Anger=%d, Fear=%d, Mistrust=%d, Hurt=%d\n",
           parry_state.anger, parry_state.fear, parry_state.mistrust, parry_state.hurt);
}

void load_data_files(void) {
    // Load key synonyms (simplified from SYNONM.ALF)
    SAFE_STRCPY(synonyms[synonym_count].word, "DOCTOR", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "PHYSICIAN", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "PSYCHIATRIST", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "PEOPLE", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "PERSON", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "FOLKS", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "ITALIAN", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "ITALIANS", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "MAFIA", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "MAFIA", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "GANGSTER", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "CRIMINAL", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "RACKET", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "GAMBLING", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH); synonym_count++;
    SAFE_STRCPY(synonyms[synonym_count].word, "BETTING", MAX_WORD_LENGTH); SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH); synonym_count++;
    
    // Load key flares (paranoid triggers)
    SAFE_STRCPY(flares[flare_count].topic, "MAFIA", MAX_WORD_LENGTH); flares[flare_count].weight = 10; flares[flare_count].is_active = true; flares[flare_count].is_sensitive = true; flare_count++;
    SAFE_STRCPY(flares[flare_count].topic, "CROOK", MAX_WORD_LENGTH); flares[flare_count].weight = 8; flares[flare_count].is_active = true; flares[flare_count].is_sensitive = true; flare_count++;
    SAFE_STRCPY(flares[flare_count].topic, "ITALY", MAX_WORD_LENGTH); flares[flare_count].weight = 7; flares[flare_count].is_active = true; flares[flare_count].is_sensitive = true; flare_count++;
    SAFE_STRCPY(flares[flare_count].topic, "RACES", MAX_WORD_LENGTH); flares[flare_count].weight = 6; flares[flare_count].is_active = true; flares[flare_count].is_sensitive = true; flare_count++;
    SAFE_STRCPY(flares[flare_count].topic, "DR", MAX_WORD_LENGTH); flares[flare_count].weight = 5; flares[flare_count].is_active = true; flares[flare_count].is_sensitive = false; flare_count++;
    SAFE_STRCPY(flares[flare_count].topic, "SPY", MAX_WORD_LENGTH); flares[flare_count].weight = 9; flares[flare_count].is_active = true; flares[flare_count].is_sensitive = true; flare_count++;
    SAFE_STRCPY(flares[flare_count].topic, "PEOPL", MAX_WORD_LENGTH); flares[flare_count].weight = 4; flares[flare_count].is_active = true; flares[flare_count].is_sensitive = false; flare_count++;
    
    // Load patterns (simplified from SPATS.PAR and CPATS.PAR)
    // Helper macro for safe pattern loading
    #define LOAD_PATTERN(pat, resp_id, wgt, flare_req, top) do { \
        SAFE_STRCPY(patterns[pattern_count].pattern, pat, MAX_INPUT_LENGTH); \
        patterns[pattern_count].response_id = resp_id; \
        patterns[pattern_count].weight = wgt; \
        patterns[pattern_count].requires_flare = flare_req; \
        SAFE_STRCPY(patterns[pattern_count].topic, top, MAX_WORD_LENGTH); \
        pattern_count++; \
    } while(0)
    
    // Greetings
    LOAD_PATTERN("HELLO", RESPONSE_GREETING, 1, false, "GREETING");
    LOAD_PATTERN("HI", RESPONSE_GREETING, 1, false, "GREETING");
    LOAD_PATTERN("GOOD MORNING", RESPONSE_GREETING, 1, false, "GREETING");
    
    // Questions
    LOAD_PATTERN("HOW ARE YOU", RESPONSE_QUESTION, 2, false, "PERSONAL");
    LOAD_PATTERN("WHAT IS YOUR NAME", RESPONSE_QUESTION, 2, false, "PERSONAL");
    LOAD_PATTERN("WHO ARE YOU", RESPONSE_QUESTION, 2, false, "PERSONAL");
    
    // Paranoid triggers
    LOAD_PATTERN("MAFIA", RESPONSE_MAFIA, 10, true, "MAFIA");
    LOAD_PATTERN("ITALY", RESPONSE_MAFIA, 8, true, "ITALY");
    LOAD_PATTERN("CROOK", RESPONSE_PARANOID, 8, true, "CROOK");
    LOAD_PATTERN("SPY", RESPONSE_PARANOID, 9, true, "SPY");
    LOAD_PATTERN("DR", RESPONSE_DOCTORS, 5, false, "DR");
    LOAD_PATTERN("RACES", RESPONSE_RACE_TRACK, 6, true, "RACES");
    
    // Goodbye
    LOAD_PATTERN("BYE", RESPONSE_GOODBYE, 1, false, "GOODBYE");
    LOAD_PATTERN("GOODBYE", RESPONSE_GOODBYE, 1, false, "GOODBYE");
    
    // Clean up macro
    #undef LOAD_PATTERN
    
    // Load responses
    responses[0] = (Response){RESPONSE_GREETING, "Hello.", "GREETING", false};
    responses[1] = (Response){RESPONSE_GREETING, "Hi there.", "GREETING", false};
    responses[2] = (Response){RESPONSE_GREETING, "Hello. How are you?", "GREETING", false};
    
    responses[3] = (Response){RESPONSE_QUESTION, "I'm fine, I guess.", "PERSONAL", false};
    responses[4] = (Response){RESPONSE_QUESTION, "My name is Frank. What's yours?", "PERSONAL", false};
    responses[5] = (Response){RESPONSE_QUESTION, "I'm just a person trying to get by.", "PERSONAL", false};
    responses[6] = (Response){RESPONSE_QUESTION, "Why do you want to know?", "PERSONAL", false};
    
    responses[7] = (Response){RESPONSE_MAFIA, "I don't know anything about the Mafia.", "MAFIA", false};
    responses[8] = (Response){RESPONSE_MAFIA, "Why are you asking me about that?", "MAFIA", false};
    responses[9] = (Response){RESPONSE_MAFIA, "The Mafia doesn't have anything to do with me.", "MAFIA", false};
    responses[10] = (Response){RESPONSE_MAFIA, "I've never been to Italy.", "ITALY", false};
    responses[11] = (Response){RESPONSE_MAFIA, "What makes you think I know about Italians?", "ITALY", false};
    
    responses[12] = (Response){RESPONSE_PARANOID, "I don't like crooks.", "CROOK", false};
    responses[13] = (Response){RESPONSE_PARANOID, "There are too many crooks around.", "CROOK", false};
    responses[14] = (Response){RESPONSE_PARANOID, "Are you trying to find out something?", "SPY", false};
    responses[15] = (Response){RESPONSE_PARANOID, "Why are you asking me all these questions?", "SPY", false};
    responses[16] = (Response){RESPONSE_PARANOID, "I think people are out to get me.", "PARANOID", false};
    
    responses[17] = (Response){RESPONSE_DOCTORS, "I don't trust doctors.", "DR", false};
    responses[18] = (Response){RESPONSE_DOCTORS, "Doctors ask too many questions.", "DR", false};
    responses[19] = (Response){RESPONSE_DOCTORS, "Are you a doctor?", "DR", false};
    
    responses[20] = (Response){RESPONSE_RACE_TRACK, "I used to go to the track.", "RACES", false};
    responses[21] = (Response){RESPONSE_RACE_TRACK, "I don't go to the races anymore.", "RACES", false};
    responses[22] = (Response){RESPONSE_RACE_TRACK, "The track is full of crooks.", "RACES", false};
    
    responses[23] = (Response){RESPONSE_NEUTRAL, "I see.", "GENERAL", false};
    responses[24] = (Response){RESPONSE_NEUTRAL, "That's interesting.", "GENERAL", false};
    responses[25] = (Response){RESPONSE_NEUTRAL, "Go on.", "GENERAL", false};
    responses[26] = (Response){RESPONSE_NEUTRAL, "Tell me more about that.", "GENERAL", false};
    responses[27] = (Response){RESPONSE_NEUTRAL, "I don't understand.", "GENERAL", false};
    
    responses[28] = (Response){RESPONSE_ANGRY, "That makes me mad!", "ANGER", false};
    responses[29] = (Response){RESPONSE_ANGRY, "I don't like that.", "ANGER", false};
    responses[30] = (Response){RESPONSE_ANGRY, "Why are you bothering me?", "ANGER", false};
    
    responses[31] = (Response){RESPONSE_FEARFUL, "That scares me.", "FEAR", false};
    responses[32] = (Response){RESPONSE_FEARFUL, "I'm afraid of that.", "FEAR", false};
    responses[33] = (Response){RESPONSE_FEARFUL, "I don't want to talk about that.", "FEAR", false};
    
    responses[34] = (Response){RESPONSE_MISTRUSTFUL, "I don't believe you.", "MISTRUST", false};
    responses[35] = (Response){RESPONSE_MISTRUSTFUL, "You can't fool me.", "MISTRUST", false};
    responses[36] = (Response){RESPONSE_MISTRUSTFUL, "I think you're lying.", "MISTRUST", false};
    
    responses[37] = (Response){RESPONSE_GOODBYE, "Goodbye.", "GOODBYE", false};
    responses[38] = (Response){RESPONSE_GOODBYE, "See you later.", "GOODBYE", false};
    responses[39] = (Response){RESPONSE_GOODBYE, "Take care.", "GOODBYE", false};
    
    response_count = 40;
    
    printf("Loaded %d synonyms, %d patterns, %d responses, %d flares\n", 
           synonym_count, pattern_count, response_count, flare_count);
}

char* process_input(const char* input) {
    static char response_buffer[MAX_INPUT_LENGTH];
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int word_count = 0;
    
    parry_state.conversation_turn++;
    
    // Tokenize and normalize input
    tokenize_input(input, words, &word_count);
    normalize_words(words, word_count);
    
    // Check for flares (paranoid triggers)
    check_flares(words, word_count);
    
    // Update emotional state based on input
    update_emotional_state(words, word_count);
    
    // Match patterns and generate response
    int matched_pattern_id = -1;
    match_pattern(words, word_count, &matched_pattern_id);
    
    char* response;
    if (matched_pattern_id >= 0) {
        response = generate_response(matched_pattern_id, words, word_count);
    } else {
        // Default response based on emotional state
        if (parry_state.anger > 8) {
            response = random_response_for_topic("ANGER");
        } else if (parry_state.fear > 8) {
            response = random_response_for_topic("FEAR");
        } else if (parry_state.mistrust > 8) {
            response = random_response_for_topic("MISTRUST");
        } else {
            response = random_response_for_topic("GENERAL");
        }
    }
    
    // Copy response to buffer
    SAFE_STRCPY(response_buffer, response, MAX_INPUT_LENGTH);
    
    // Update memory
    update_memory(input, response_buffer);
    
    // Log conversation
    save_conversation_log(input, response_buffer);
    
    return response_buffer;
}

void tokenize_input(const char* input, char words[][MAX_WORD_LENGTH], int* word_count) {
    char temp_input[MAX_INPUT_LENGTH];
    SAFE_STRCPY(temp_input, input, MAX_INPUT_LENGTH);
    
    *word_count = 0;
    char* token = strtok(temp_input, " \t\n\r,.!?;:");
    
    while (token != NULL && *word_count < MAX_WORDS) {
        SAFE_STRCPY(words[*word_count], token, MAX_WORD_LENGTH);
        to_lower(words[*word_count]);
        strip_punctuation(words[*word_count]);
        (*word_count)++;
        token = strtok(NULL, " \t\n\r,.!?;:");
    }
}

void normalize_words(char words[][MAX_WORD_LENGTH], int word_count) {
    for (int i = 0; i < word_count; i++) {
        char* synonym = get_synonym(words[i]);
        if (synonym) {
            SAFE_STRCPY(words[i], synonym, MAX_WORD_LENGTH);
        }
    }
}

int match_pattern(char words[][MAX_WORD_LENGTH], int word_count, int* matched_pattern_id) {
    int best_score = -1;
    *matched_pattern_id = -1;
    
    for (int p = 0; p < pattern_count; p++) {
        char pattern_words[MAX_WORDS][MAX_WORD_LENGTH];
        int pattern_word_count = 0;
        
        // Tokenize pattern
        char temp_pattern[MAX_INPUT_LENGTH];
        SAFE_STRCPY(temp_pattern, patterns[p].pattern, MAX_INPUT_LENGTH);
        to_lower(temp_pattern);
        
        char* token = strtok(temp_pattern, " ");
        while (token != NULL && pattern_word_count < MAX_WORDS) {
            SAFE_STRCPY(pattern_words[pattern_word_count], token, MAX_WORD_LENGTH);
            pattern_word_count++;
            token = strtok(NULL, " ");
        }
        
        // Check if all pattern words are present in input
        int matches = 0;
        for (int pw = 0; pw < pattern_word_count; pw++) {
            for (int iw = 0; iw < word_count; iw++) {
                if (strcmp(pattern_words[pw], words[iw]) == 0) {
                    matches++;
                    break;
                }
            }
        }
        
        // Calculate score
        if (matches == pattern_word_count) {
            int score = patterns[p].weight * matches;
            
            // Boost score if this is a flare topic and flare is active
            if (patterns[p].requires_flare && parry_state.flare_active &&
                strcmp(patterns[p].topic, parry_state.current_flare) == 0) {
                score *= 2;
            }
            
            if (score > best_score) {
                best_score = score;
                *matched_pattern_id = p;
            }
        }
    }
    
    return best_score;
}

char* generate_response(int pattern_id, char words[][MAX_WORD_LENGTH], int word_count) {
    if (pattern_id < 0 || pattern_id >= pattern_count) {
        return "I don't understand.";
    }
    
    int response_type = patterns[pattern_id].response_id;
    
    // Find appropriate response
    for (int r = 0; r < response_count; r++) {
        if (responses[r].id == response_type && !responses[r].is_exhausted) {
            // Mark as exhausted if used too much
            if (rand() % 3 == 0) {
                responses[r].is_exhausted = true;
            }
            return responses[r].text;
        }
    }
    
    // If no response found, return default
    return random_response_for_topic("GENERAL");
}

void check_flares(char words[][MAX_WORD_LENGTH], int word_count) {
    int highest_weight = -1;
    int flare_index = -1;
    
    // Check each word against flare topics
    for (int i = 0; i < word_count; i++) {
        for (int f = 0; f < flare_count; f++) {
            char flare_lower[MAX_WORD_LENGTH];
            SAFE_STRCPY(flare_lower, flares[f].topic, MAX_WORD_LENGTH);
            to_lower(flare_lower);
            
            if (strcmp(words[i], flare_lower) == 0 && flares[f].weight > highest_weight) {
                highest_weight = flares[f].weight;
                flare_index = f;
            }
        }
    }
    
    // Activate flare if found
    if (flare_index >= 0) {
        parry_state.flare_active = true;
        SAFE_STRCPY(parry_state.current_flare, flares[flare_index].topic, MAX_WORD_LENGTH);
        SAFE_STRCPY(parry_state.current_topic, flares[flare_index].topic, MAX_WORD_LENGTH);
        
        // Increase emotional responses based on flare sensitivity
        if (flares[flare_index].is_sensitive) {
            parry_state.fear += 2;
            parry_state.mistrust += 2;
            if (highest_weight >= 8) {
                parry_state.anger += 3;
            }
        }
        
        printf("[FLARE ACTIVATED: %s, Weight: %d]\n", parry_state.current_flare, highest_weight);
    }
}

void update_emotional_state(char words[][MAX_WORD_LENGTH], int word_count) {
    // Emotional triggers
    for (int i = 0; i < word_count; i++) {
        if (strcmp(words[i], "spy") == 0 || strcmp(words[i], "watch") == 0) {
            parry_state.fear += 2;
            parry_state.mistrust += 1;
        }
        else if (strcmp(words[i], "liar") == 0 || strcmp(words[i], "lie") == 0) {
            parry_state.anger += 2;
            parry_state.hurt += 1;
        }
        else if (strcmp(words[i], "crazy") == 0 || strcmp(words[i], "insane") == 0) {
            parry_state.anger += 3;
            parry_state.hurt += 2;
        }
        else if (strcmp(words[i], "trust") == 0) {
            parry_state.mistrust += 1;
        }
    }
    
    // Decay emotions gradually
    if (parry_state.conversation_turn % 3 == 0) {
        if (parry_state.anger > parry_state.anger0) parry_state.anger--;
        if (parry_state.fear > parry_state.fear0) parry_state.fear--;
        if (parry_state.mistrust > parry_state.mistrust0) parry_state.mistrust--;
        if (parry_state.hurt > parry_state.hurt0) parry_state.hurt--;
    }
    
    // Cap emotions at maximum levels
    if (parry_state.anger > 15) parry_state.anger = 15;
    if (parry_state.fear > 15) parry_state.fear = 15;
    if (parry_state.mistrust > 15) parry_state.mistrust = 15;
    if (parry_state.hurt > 15) parry_state.hurt = 15;
}

void update_memory(const char* input, const char* response) {
    if (memory_count < MAX_MEMORY_ITEMS) {
        SAFE_STRCPY(memory[memory_count].statement, input, MAX_INPUT_LENGTH);
        SAFE_STRCPY(memory[memory_count].topic, parry_state.current_topic, MAX_WORD_LENGTH);
        memory[memory_count].is_belief = false;
        memory_count++;
    }
}

char* get_synonym(const char* word) {
    for (int i = 0; i < synonym_count; i++) {
        char word_lower[MAX_WORD_LENGTH];
        char synonym_word_lower[MAX_WORD_LENGTH];
        
        SAFE_STRCPY(word_lower, word, MAX_WORD_LENGTH);
        SAFE_STRCPY(synonym_word_lower, synonyms[i].word, MAX_WORD_LENGTH);
        to_lower(word_lower);
        to_lower(synonym_word_lower);
        
        if (strcmp(word_lower, synonym_word_lower) == 0) {
            return synonyms[i].synonym;
        }
    }
    return NULL;
}

void strip_punctuation(char* word) {
    int len = strlen(word);
    while (len > 0 && !isalnum(word[len-1])) {
        word[len-1] = '\0';
        len--;
    }
}

void to_lower(char* word) {
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
}

char* random_response_for_topic(const char* topic) {
    // Collect matching responses
    int matching_responses[MAX_RESPONSES];
    int match_count = 0;
    
    for (int i = 0; i < response_count; i++) {
        if (strcmp(responses[i].topic, topic) == 0 && !responses[i].is_exhausted) {
            matching_responses[match_count++] = i;
        }
    }
    
    if (match_count > 0) {
        int chosen = matching_responses[rand() % match_count];
        return responses[chosen].text;
    }
    
    // Default responses
    static char* defaults[] = {
        "I see.",
        "That's interesting.",
        "Go on.",
        "Tell me more.",
        "I don't understand."
    };
    
    return defaults[rand() % 5];
}

bool is_question(const char* input) {
    return (strchr(input, '?') != NULL) ||
           (strstr(input, "what") != NULL) ||
           (strstr(input, "why") != NULL) ||
           (strstr(input, "how") != NULL) ||
           (strstr(input, "who") != NULL) ||
           (strstr(input, "when") != NULL) ||
           (strstr(input, "where") != NULL);
}

void save_conversation_log(const char* input, const char* response) {
    static FILE* log_file = NULL;
    
    if (!log_file) {
        log_file = fopen("parry_conversation.log", "a");
    }
    
    if (log_file) {
        time_t now = time(NULL);
        fprintf(log_file, "[%s] User: %s\n", ctime(&now), input);
        fprintf(log_file, "[%s] PARRY: %s\n\n", ctime(&now), response);
        fflush(log_file);
    }
}
