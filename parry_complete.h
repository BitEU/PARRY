#ifndef PARRY_COMPLETE_H
#define PARRY_COMPLETE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

// Constants based on original PARRY LISP implementation
#define MAX_INPUT_LENGTH 1024
#define MAX_WORD_LENGTH 64
#define MAX_WORDS 100
#define MAX_PATTERNS 2000
#define MAX_RESPONSES 1000
#define MAX_MEMORY_ITEMS 500
#define MAX_FLARES 50
#define MAX_BELIEFS 200
#define MAX_SYNONYMS 2000
#define MAX_IDIOMS 500
#define MAX_DICT_ENTRIES 2000
#define MAX_TOPICS 700
#define MAX_SEMUNITS 1500

// Safe string operations
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

// Dictionary entry structure (from DICTIO)
typedef struct {
    char word[MAX_WORD_LENGTH];
    char canonical[MAX_WORD_LENGTH];  // 5-letter canonical form
    char pos[MAX_WORD_LENGTH];        // part of speech
} DictEntry;

// Synonym mapping (from SYNONM.ALF)
typedef struct {
    char word[MAX_WORD_LENGTH];
    char synonym[MAX_WORD_LENGTH];
} Synonym;

// Idiom pattern (from IDIOM.ALF)
typedef struct {
    char pattern[MAX_INPUT_LENGTH];
    char replacement[MAX_INPUT_LENGTH];
} Idiom;

// Semantic unit (from PDATB - belief/response system)
typedef struct {
    int unit_id;
    char unit_name[MAX_WORD_LENGTH];
    char topic[MAX_WORD_LENGTH];
    char normal_responses[10][MAX_INPUT_LENGTH];
    char embedded_responses[5][MAX_INPUT_LENGTH];
    int normal_count;
    int embedded_count;
    bool exhausted;
} SemanticUnit;

// Flare concept (from RDATA - paranoid trigger system)
typedef struct {
    char name[MAX_WORD_LENGTH];
    int weight;
    char next_flare[MAX_WORD_LENGTH];  // Pointer to next flare concept
    bool is_indirect;
    bool is_sensitive;
    int story_units[10];  // Semantic unit IDs for this flare
    int story_count;
} FlareConcept;

// Pattern for input matching (from SPATS/CPATS)
typedef struct {
    char pattern[MAX_INPUT_LENGTH];
    int semantic_unit_id;
    int priority;
    bool requires_context;
} Pattern;

// Response selection structure
typedef struct {
    int id;
    char text[MAX_INPUT_LENGTH];
    char topic[MAX_WORD_LENGTH];
    bool is_exhausted;
    int usage_count;
} Response;

// Belief structure (from PMEM - PARRY's beliefs)
typedef struct {
    int unit_id;
    char belief_text[MAX_INPUT_LENGTH];
    int truth_value;  // 0-100 certainty
    bool is_core_delusion;
} Belief;

// Emotional state (affect system from PMEM)
typedef struct {
    // Primary emotions (0-15 scale)
    int anger;
    int fear;
    int mistrust;
    int shame;
    
    // Baseline values
    int anger0;
    int fear0;
    int mistrust0;
    int shame0;
    
    // Flare system state
    bool flare_active;
    char current_flare[MAX_WORD_LENGTH];
    int flare_intensity;
    
    // Conversation state
    char current_topic[MAX_WORD_LENGTH];
    int conversation_turn;
    int silence_count;
    
    // Interview state
    bool interview_mode;
    int last_output_unit;
    int last_input_unit;
} EmotionalState;

// Conversation list entry (from PMEM - CLIST)
typedef struct {
    char direction[4];  // "IN" or "OUT"
    int semantic_unit;
    char text[MAX_INPUT_LENGTH];
    int turn_number;
} ConversationEntry;

// Global data structures
extern DictEntry dictionary[MAX_DICT_ENTRIES];
extern Synonym synonyms[MAX_SYNONYMS];
extern Idiom idioms[MAX_IDIOMS];
extern SemanticUnit semantic_units[MAX_SEMUNITS];
extern FlareConcept flare_concepts[MAX_FLARES];
extern Pattern patterns[MAX_PATTERNS];
extern Response responses[MAX_RESPONSES];
extern Belief beliefs[MAX_BELIEFS];
extern ConversationEntry conversation_list[MAX_MEMORY_ITEMS];

extern int dict_count;
extern int synonym_count;
extern int idiom_count;
extern int semantic_unit_count;
extern int flare_count;
extern int pattern_count;
extern int response_count;
extern int belief_count;
extern int conversation_count;

extern EmotionalState parry_state;

// Core PARRY functions (from PMEM)

// Initialization
void init_parry(void);
void load_dictionary(void);
void load_synonyms(void);
void load_idioms(void);
void load_semantic_units(void);
void load_flare_system(void);
void load_patterns(void);
void load_beliefs(void);

// Input processing (from PMEM - pattern matching)
char* process_input(const char* input);
void tokenize_input(const char* input, char words[][MAX_WORD_LENGTH], int* word_count);
void apply_idioms(char words[][MAX_WORD_LENGTH], int* word_count);
void canonicalize_words(char words[][MAX_WORD_LENGTH], int word_count);
int match_patterns(char words[][MAX_WORD_LENGTH], int word_count);

// Semantic processing
int identify_semantic_unit(char words[][MAX_WORD_LENGTH], int word_count);
void update_anaphora(char words[][MAX_WORD_LENGTH], int word_count);

// Affect system (emotional state updates)
void check_flares(char words[][MAX_WORD_LENGTH], int word_count);
void update_affect(char words[][MAX_WORD_LENGTH], int word_count);
void affect_decay(void);

// Response generation (from PMEM - REPLYR, EXPRESS, SELSENTENCE)
char* generate_response(int semantic_unit_id);
char* select_sentence(int unit_id, const char* mode);
char* express_belief(int belief_id);

// Memory and conversation list (from PMEM - ANDTHEN)
void add_to_conversation_list(const char* direction, int unit_id, const char* text);
void update_memory(const char* input, const char* response);

// Utility functions
char* lookup_canonical(const char* word);
char* lookup_synonym(const char* word);
bool is_question(const char* input);
void to_lower(char* str);
void strip_punctuation(char* str);
int random_int(int max);

// Logging
void save_conversation_log(const char* input, const char* response);
void debug_print_state(void);

#endif // PARRY_COMPLETE_H
