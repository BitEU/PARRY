#ifndef PARRY_H
#define PARRY_H

// Platform-specific includes and compatibility
#ifdef UNIVAC
    // UNIVAC/vintage system compatibility
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <time.h>
    
    // Define bool type for older systems
    #ifndef __cplusplus
        #ifndef bool
            typedef int bool;
            #define true 1
            #define false 0
        #endif
    #endif
    
    // Safe string functions for UNIVAC
    #define SAFE_STRCPY(dest, src, size) do { \
        strncpy(dest, src, (size) - 1); \
        (dest)[(size) - 1] = '\0'; \
    } while(0)
    
    #define SAFE_STRCAT(dest, src, size) do { \
        size_t len = strlen(dest); \
        if (len < (size) - 1) { \
            strncpy((dest) + len, src, (size) - len - 1); \
            (dest)[(size) - 1] = '\0'; \
        } \
    } while(0)
    
#else
    // Modern system includes
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <time.h>
    #include <stdbool.h>
    
    // Safe string functions for modern systems
    #ifdef _MSC_VER
        #define SAFE_STRCPY(dest, src, size) strcpy_s(dest, size, src)
        #define SAFE_STRCAT(dest, src, size) strcat_s(dest, size, src)
    #else
        #define SAFE_STRCPY(dest, src, size) do { \
            strncpy(dest, src, (size) - 1); \
            (dest)[(size) - 1] = '\0'; \
        } while(0)
        
        #define SAFE_STRCAT(dest, src, size) do { \
            size_t len = strlen(dest); \
            if (len < (size) - 1) { \
                strncpy((dest) + len, src, (size) - len - 1); \
                (dest)[(size) - 1] = '\0'; \
            } \
        } while(0)
    #endif
#endif

// Constants
#define MAX_INPUT_LENGTH 1024
#define MAX_WORD_LENGTH 64
#define MAX_WORDS 50
#define MAX_PATTERNS 1000
#define MAX_RESPONSES 500
#define MAX_MEMORY_ITEMS 200
#define MAX_FLARES 20
#define MAX_BELIEFS 100

// Data structures
typedef struct {
    char word[MAX_WORD_LENGTH];
    char synonym[MAX_WORD_LENGTH];
} Synonym;

typedef struct {
    char pattern[MAX_INPUT_LENGTH];
    int response_id;
    int weight;
    bool requires_flare;
    char topic[MAX_WORD_LENGTH];
} Pattern;

typedef struct {
    int id;
    char text[MAX_INPUT_LENGTH];
    char topic[MAX_WORD_LENGTH];
    bool is_exhausted;
} Response;

typedef struct {
    char topic[MAX_WORD_LENGTH];
    int weight;
    bool is_active;
    bool is_sensitive;
} Flare;

typedef struct {
    char statement[MAX_INPUT_LENGTH];
    char topic[MAX_WORD_LENGTH];
    bool is_belief;
} MemoryItem;

typedef struct {
    char word[MAX_WORD_LENGTH];
    char pos[MAX_WORD_LENGTH];  // part of speech
    char canonical[MAX_WORD_LENGTH];
} DictEntry;

// Emotional state variables (paranoid model)
typedef struct {
    int anger;
    int fear;
    int mistrust;
    int hurt;
    int anger0;     // baseline values
    int fear0;
    int mistrust0;
    int hurt0;
    bool flare_active;
    char current_flare[MAX_WORD_LENGTH];
    char current_topic[MAX_WORD_LENGTH];
    int conversation_turn;
} EmotionalState;

// Global state
extern EmotionalState parry_state;
extern Synonym synonyms[1000];
extern Pattern patterns[MAX_PATTERNS];
extern Response responses[MAX_RESPONSES];
extern Flare flares[MAX_FLARES];
extern MemoryItem memory[MAX_MEMORY_ITEMS];
extern DictEntry dictionary[2000];

extern int synonym_count;
extern int pattern_count;
extern int response_count;
extern int flare_count;
extern int memory_count;
extern int dict_count;

// Function declarations
void init_parry(void);
void load_data_files(void);
char* process_input(const char* input);
void tokenize_input(const char* input, char words[][MAX_WORD_LENGTH], int* word_count);
void normalize_words(char words[][MAX_WORD_LENGTH], int word_count);
int match_pattern(char words[][MAX_WORD_LENGTH], int word_count, int* matched_pattern_id);
char* generate_response(int pattern_id, char words[][MAX_WORD_LENGTH], int word_count);
void update_emotional_state(char words[][MAX_WORD_LENGTH], int word_count);
void check_flares(char words[][MAX_WORD_LENGTH], int word_count);
void update_memory(const char* input, const char* response);
char* substitute_pronouns(const char* text);
bool is_question(const char* input);
bool contains_delusion_trigger(char words[][MAX_WORD_LENGTH], int word_count);
char* get_synonym(const char* word);
void strip_punctuation(char* word);
void to_lower(char* word);
char* random_response_for_topic(const char* topic);
void save_conversation_log(const char* input, const char* response);

// Predefined response categories
#define RESPONSE_GREETING 1
#define RESPONSE_QUESTION 2
#define RESPONSE_PARANOID 3
#define RESPONSE_NEUTRAL 4
#define RESPONSE_ANGRY 5
#define RESPONSE_FEARFUL 6
#define RESPONSE_MISTRUSTFUL 7
#define RESPONSE_HURT 8
#define RESPONSE_DELUSION 9
#define RESPONSE_MAFIA 10
#define RESPONSE_DOCTORS 11
#define RESPONSE_RACE_TRACK 12
#define RESPONSE_GOODBYE 13

#endif // PARRY_H
