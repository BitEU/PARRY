#include "parry_complete.h"

// Dictionary data parsed from DICTIO
void load_dictionary(void) {
    dict_count = 0;

    SAFE_STRCPY(dictionary[dict_count].word, ",", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, ".", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "?", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "a", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "able", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ably", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "abnormal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "about", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "above", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "absurd", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "accept", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "accident", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "accord", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "accuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ache", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "acid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "acquaint", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "act", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "actual", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "add", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "addict", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "address", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "adios", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "adjust", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "administer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "admire", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "admission", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "admit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "advantage", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "advice", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "advise", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "affect", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "affectionate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "afraid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "after", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "afternoon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "again", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "against", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "age", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "aggravate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "agitate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "agnew", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ago", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "agree", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ahead", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "aid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "alcohol", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "alias", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "alioto", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "alive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "all", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "allow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "aloha", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "alone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "along", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "aloud", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "already", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "alright", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "also", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "although", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "alto", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "always", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "am", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ambition", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "america", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "american", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "amid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "amidst", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "amount", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "amphetamine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "amuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "an", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "analyst", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ancestry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "and", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "angeles", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "anger", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "animal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "annoy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "another", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "answer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "anxiety", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "anxious", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "any", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "anyway", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "apartment", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "apologize", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "appear", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "appetite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "appreciate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "approve", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "are", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "argue", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "argumentative", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "arithmetic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "arm", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "armed", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "army", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "arnold", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "around", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "arrest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "arrive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "as", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ask", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "asleep", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ass", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "asshole", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "assist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "assume", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "assure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "asylum", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "at", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "atheist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attach", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attack", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attempt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attention", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attentive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attitude", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "attract", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "authoritative", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "auto", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "automobile", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "avenue", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "average", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "avoid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "aware", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "away", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "awful", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "baby", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bachelor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "back", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "background", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "backward", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bad", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "baker", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ball", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "banana", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bang", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bank", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "barf", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "baseball", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "basketball", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bastard", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bathe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bathroom", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bay", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "be", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bean", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "beat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "beauty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "became", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "because", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "become", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bed", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "beer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "before", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "beg", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "began", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "begin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "behave", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "behind", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "belief", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "believe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "belong", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "below", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "berkeley", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "berserk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "beside", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "besides", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "best", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "better", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "betty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "between", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bible", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "big", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bill", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bird", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "birth", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "birthdate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "birthday", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "birthplace", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bisexual", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bitch", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bizarre", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "black", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "blame", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "blank", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "block", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "blood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "blow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "blue", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "blush", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "body", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bomb", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bonanno", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bonzo", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "book", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bookie", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bookmake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "boot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bootleg", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "booze", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bore", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "born", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "borrow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "boss", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bother", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bottle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bowel", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "boy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "boyfriend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "brain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "branch", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "brandy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bread", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "break", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "breakfast", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "breath", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "breathe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bribe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bridge", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bright", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "brilliant", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bring", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "broadcast", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "brood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "brother", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "brought", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "buck", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "buddy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bug", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "build", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bullet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bullshit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bum", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bunch", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bundle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bust", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "busy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "but", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "buy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "by", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "bye", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cage", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "california", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "call", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "calm", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "came", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "can", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "can't", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cant", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "capable", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "capital", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "capone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "captive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "car", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "card", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "care", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "career", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "case", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cash", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "catch", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "catholic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "caught", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cause", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cell", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "certain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chair", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "change", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chauvinist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cheat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "check", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cheer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chess", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chief", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chieftain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "child", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "childhood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "children", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "china", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chomsky", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "christ", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "christmas", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "chuck", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "church", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cigar", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cigarette", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "city", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "clarify", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "clear", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "clever", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "climate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "clinic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "clock", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "close", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "clothes", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cloud", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "clown", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "club", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cocaine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cock", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "coffee", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "colby", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cold", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "college", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "color", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "combat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "come", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "comfort", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "commie", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "commit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "commune", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "communicate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "company", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "compel", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "complain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "complaint", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "complement", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "compulsive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "compunction", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "compute", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "con", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "concentrate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "concern", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "conclude", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "condition", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "confide", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "confuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "connect", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "conscious", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "consider", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "console", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "conspiracy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "constipate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "contact", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "continue", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "contract", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "control", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "converse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "convict", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "convince", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "convulse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cool", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cooperate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cop", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "correct", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cosa", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cost", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cough", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "could", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "count", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "country", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "course", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "court", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cover", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "coward", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "coworker", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cram", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "crap", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "craps", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "craze", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "crazy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "creep", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "crime", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "criminal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "critic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "crook", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "crooked", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cross", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "crowd", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "crush", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cunt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "curious", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "cute", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "da", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dad", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dance", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "danger", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dark", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "date", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "day", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "daydream", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dead", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "deal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "death", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "decay", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "decide", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "defend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "definite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "deject", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "delude", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "democrat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "depend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "depress", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "descent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "describe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "desire", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "despair", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "desperate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "destroy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "detect", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "deutsch", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "deviate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "devil", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dexedrine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "diagnose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "diagnosis", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dice", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "did", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "die", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "diet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "differ", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "difficult", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dig", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dime", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dinner", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "direct", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "disappoint", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "discharge", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "discourage", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "discuss", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "disease", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "disgust", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dispute", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dissolve", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "disturb", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "divide", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "divorce", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dizzy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "do", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "doctor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dollar", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dominate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "done", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dope", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "double", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "doublecross", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "doubt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dough", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "down", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "downhearted", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dr", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "draft", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "drank", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dream", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "drink", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "drive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "drop", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "drug", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "drunk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dts", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dull", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dumb", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dumbell", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dummy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dump", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dung", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "during", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "dying", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "early", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "earn", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "earthquake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ease", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "easy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "eat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "eavesdrop", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ecstasy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "educate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "either", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "elaborate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "elate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "electric", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "electrify", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "elevate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "else", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "embarrass", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "emergency", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "emote", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "employ", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "end", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "enemy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "energy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "engage", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "english", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "enjoy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "enormous", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "enough", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "enter", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "entertain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "episode", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "error", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "escape", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "espanol", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "especial", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ethnic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "euphoria", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "evade", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "even", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "evening", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "event", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ever", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "every", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "evidence", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "evil", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "exact", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "exalt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "example", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "except", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "excite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "exercise", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "exhiliarate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "exist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "expand", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "expect", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "experience", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "expert", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "explain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "eye", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fact", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fag", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "faggot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "failure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "faint", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fair", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fairy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fall", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "false", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "familiar", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "family", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fantasy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "far", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fart", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fascinate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fast", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fatal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "father", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "favor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "favorite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fbi", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fear", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fed", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "feed", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "feel", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "feet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fellow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "felt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "female", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "few", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fidelity", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fight", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "figure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "film", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "final", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "finance", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "find", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "finger", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fink", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fire", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fireman", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "first", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fish", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fix", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "flag", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "flip", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "flow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fly", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "folk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "follow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fond", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "food", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fool", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "foot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "football", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "for", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "force", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ford", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "foreign", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "forever", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "forget", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "foul", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "found", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "frame", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "francais", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "francisco", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fraud", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "freak", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "free", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "french", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "frequent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "friend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "friendly", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fright", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "frighten", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "from", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "frustrate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fuck", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "full", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fun", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "further", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "furthermore", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fury", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fuss", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "future", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "fuzz", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gamble", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "game", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gang", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gangland", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gangster", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gather", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gave", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gay", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gender", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "general", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "german", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "get", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "girl", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "girlfriend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "give", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "glad", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gloom", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "go", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "goal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "god", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "goddam", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "godfather", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "golf", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "good", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "goodbye", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "got", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "govern", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "grad", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "grade", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "graduate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "grass", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "great", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "green", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "greet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "grudge", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "guard", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "guess", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "guilt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gun", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gut", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "guy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "gyp", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ha", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "habit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hablas", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "had", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hair", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "half", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "halfwit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hallucinate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hand", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "handsome", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hang", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "happen", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "happy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hard", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "harm", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "has", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "have", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "he", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "head", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "headache", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "health", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hear", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "heard", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "heart", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "heaven", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "heavy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "heel", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "height", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "held", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hell", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hello", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "help", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "henchman", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "henchmen", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "her", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "here", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hereafter", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "heroin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hers", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "herself", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hey", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hi", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hide", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "high", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "him", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "himself", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hip", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hire", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "his", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hobby", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hold", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hole", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "home", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "homely", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hometown", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "homicide", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "homo", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "homosexual", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "honest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "honey", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hoodlum", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hope", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "horny", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "horrible", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "horse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "horserace", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hospital", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hostile", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hour", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "house", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "how", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "howdy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "human", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "humor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hunger", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hurt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "husband", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hyper", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hypnosis", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hypnotism", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "hypnotize", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "i", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "i'm", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "idea", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "idiot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "if", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ignore", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ill", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "illegal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "im", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "imaginary", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "imagine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "immediate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "immigrant", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "immoral", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "impatient", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "impeach", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "impolite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "import", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "imposter", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "impotent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "impulse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "in", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "incriminate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "indeed", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "inferior", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "influence", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "inform", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "information", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "initiate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "initiative", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "injure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "injury", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "insomnia", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "instead", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "insult", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "intelligence", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "intelligent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "intend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "intercourse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "interest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "interview", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "into", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "iq", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "irritable", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "irritate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "is", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "isolate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "issue", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "it", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "italiano", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "italy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jackass", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jacket", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jail", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jealous", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jerk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jesus", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jew", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jillion", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jitter", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "job", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jockey", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "joe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "john", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "join", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "joint", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "joke", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "jose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "joy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "judge", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "junk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "junkie", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "just", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "keep", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kept", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "key", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kidnap", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kill", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kind", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kind", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kinky", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "kiss", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "knife", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "knives", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "knock", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "know", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "known", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "la", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lack", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "laid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "language", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "las", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "last", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "late", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "laugh", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "law", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lawyer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lay", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lead", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "leak", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "learn", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "least", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "leave", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lecher", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "left", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "leg", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "leisure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lesbian", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "less", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "let", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "let's", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "liar", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lie", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "life", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "like", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "line", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "liquor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "listen", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "little", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "live", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "loan", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "loathe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "local", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "locate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lock", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "logical", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lonely", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "long", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "look", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "loon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "loose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lord", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "los", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lost", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lottery", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "louse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "love", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "low", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lsd", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "luck", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lump", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lunatic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lunch", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lust", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "lying", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "machine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mad", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "made", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mafia", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mafiosi", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "main", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "make", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "male", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "man", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "manic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "many", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "marihuana", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "marijuana", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "marine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "marital", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "marriage", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "marry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "masochist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "masturbate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "math", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "matter", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "may", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "maybe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "me", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "meadow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "meal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mean", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "meant", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "meat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "medical", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "medicate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "medicine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "meet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "melancholy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "member", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "memory", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "men", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mental", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mention", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "menu", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "message", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mexican", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mexico", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mice", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "microphone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "middle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "might", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "military", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mind", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "minus", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "minute", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mischief", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "miss", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "miss", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mission", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mistake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mob", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mobster", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mom", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "moment", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "money", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "month", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "moon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "moral", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "more", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "moreover", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "morning", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "most", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mother", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mouth", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "move", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "movie", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mr", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mrs", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ms", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "much", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "multiply", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "murder", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "music", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "must", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "my", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nag", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nam", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "name", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "narcotic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nasty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nation", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "natural", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nature", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nausea", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "navy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nazi", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "near", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "necessary", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "neck", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "need", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "needle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "negate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "neighbor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "neighborhood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "neither", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nerve", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "neurotic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "never", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "new", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "news", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "newspaper", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "next", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nice", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nickel", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "night", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nightmare", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nincompoop", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nixon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "no", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "noise", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "none", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "normal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nostra", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "not", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nothing", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "notice", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "now", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "numb", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "number", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nurd", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nurse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "nut", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "observe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "obtuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "obvious", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "occupation", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "occupy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "occur", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "odd", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "odor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "of", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "off", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "offend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "often", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "oh", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ok", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "okay", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "old", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "on", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "once", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "one", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "only", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "open", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "operate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "opine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "opinionated", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "opposite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "optimist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "or", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "organize", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "orgasm", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ornery", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "other", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "others", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ought", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "our", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ours", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "out", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "outlook", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "outpatient", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "over", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "overnight", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "oversolicitous", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "owe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "own", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "paid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "palo", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "paper", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "paradise", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "paranoia", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "paranoid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pardon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "parent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "parle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "parlez", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "parry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "part", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "particular", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "party", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pass", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "past", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "patient", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "patricia", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "patrick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pattern", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pay", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "payroll", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "peculiar", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "peeve", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "penis", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "penny", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "people", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "perceptive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "perhaps", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "period", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "permissive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "permit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "persecute", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "person", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "persuade", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pervert", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pessimist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "phobia", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "phone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "phony", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "physical", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "physician", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "piece", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pig", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pill", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "piss", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pistol", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "place", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "plan", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "plane", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "play", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "please", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pleasure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "plenty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "plot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "plug", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "plus", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "point", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "poison", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "poke", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "poker", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "police", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "policeman", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "policemen", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "polite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "politic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pony", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "poor", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pornography", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "position", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "possible", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "potty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pound", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "poverty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "power", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pray", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "precise", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "prefer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "preoccupy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "presence", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "present", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "preside", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pretty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "previous", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "price", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "prior", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "prison", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "problem", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "product", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "profession", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "program", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "proof", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "prostitute", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "protest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "proud", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "prove", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "psychiatric", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "psychiatrist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "psycho", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "psychological", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "psychopath", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "psychosis", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pull", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "punk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "purpose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pursue", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "pussy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "put", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "puzzle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "quarrel", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "queen", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "queer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "quest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "quick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "quiet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "quit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "quite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "quotient", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "race", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "race", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "racetrack", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "racket", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "racketeer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "radical", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "radio", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rage", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "raise", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rank", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rape", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rather", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rational", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "raw", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ray", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reach", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "react", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "read", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ready", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reagan", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "real", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "realize", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rear", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reason", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reasonable", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reassure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "recall", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "receive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "recent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "recreation", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "recur", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "red", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reefer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "regular", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reject", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "relate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "relax", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "release", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "religion", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "religious", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "remain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "remark", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "remember", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reno", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "repeat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "repetitive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reply", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "represent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "republic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "repute", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "resent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reserve", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "reside", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "respect", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "respond", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "response", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "revolver", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rich", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ridicule", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rifle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "right", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ring", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ritual", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rob", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rock", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rocker", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "roger", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rome", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "room", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "root", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "roulette", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rub", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "rum", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "run", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sad", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sadist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "safe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "said", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "salary", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "same", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "san", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sane", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sarcastic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "satan", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "satisfactory", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "satisfy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "saturday", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "saw", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "say", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "scare", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "schizophrenia", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "schizophrenic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "schmuck", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "school", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "screw", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "screwy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sears", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "season", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "secret", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "secure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sedate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "see", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "seek", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "seem", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "self", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "send", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sense", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sensible", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sensitive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "serious", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "service", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "set", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "several", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sex", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sexlife", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shall", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "share", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sharp", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "she", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shock", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shoe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shoot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shoplift", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "short", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shot", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shotgun", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "should", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shove", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "show", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shower", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shrink", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shut", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "shy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sibling", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sicily", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "side", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sie", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sign", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "simulate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "since", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sincere", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "single", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sister", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "situate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "skin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "slander", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sleep", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "slept", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "slob", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "slow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "slug", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "smart", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "smash", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "smell", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "smith", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "smoke", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "smuggle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "snake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "snicker", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "snotty", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "so", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "society", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "soldier", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "solicit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "solution", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "some", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "son", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sonny", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "soon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sore", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sorry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sort", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sound", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "space", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spanish", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spare", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "speak", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "special", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "specific", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "specifically", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "speed", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spell", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spider", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spirit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spoke", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sport", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spouse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sprechen", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "spy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "square", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "squeal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stab", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "staff", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stand", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stare", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "start", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "state", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "state", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stationed", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "status", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stay", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "steal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stew", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "still", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stink", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stockroom", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stomach", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stoolie", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stoolpigeon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stop", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "storm", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "story", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "straight", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "strain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "strange", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stranger", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "strangle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "street", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "strict", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "string", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "strong", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "strung", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stubborn", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "student", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "study", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "stupid", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "subject", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "subtract", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "success", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "such", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "suck", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sudden", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "suggest", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "suicide", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sum", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sun", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "superior", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "supernatural", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "supper", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "support", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "suppose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sure", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "suspect", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "suspicion", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "suspicious", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "swallow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sweepstake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "swell", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "swindle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "sympathize", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "syndicate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tab", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "take", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "talk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tall", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tap", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "taste", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tax", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tea", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "teach", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "telephone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "television", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tell", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "temper", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tempered", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ten", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tennis", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tense", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "terrible", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "testify", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "than", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "thank", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "that", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "the", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "theft", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "their", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "them", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "then", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "therapist", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "therapy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "there", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "therefore", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "these", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "they", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "thief", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "thieves", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "thing", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "think", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "this", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "thorazine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "those", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "though", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "thought", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "threat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "throat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "through", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "thug", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tight", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "time", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tingle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tire", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "to", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "today", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "toe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "toes", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "told", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tomorrow", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tone", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tonight", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tonite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "too", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "took", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "top", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "topic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "torpedo", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "torture", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "touchy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tough", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "toward", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "town", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "track", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "traffic", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "train", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tranquil", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "transmit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "transvestite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "trap", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "treat", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tremble", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "trial", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "trick", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "trip", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "trouble", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "true", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "trust", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "trustworthy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "try", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tube", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "turd", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "turkey", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "turn", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tv", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "two", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "type", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ugly", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ulcer", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "unbalance", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "uncle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "under", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "underneath", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "understand", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "understood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "underworld", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "uneasy", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "unite", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "unusual", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "up", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "upon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "upset", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "us", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "usa", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "use", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "used", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "usual", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "va", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vain", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vd", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "veep", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vegas", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "very", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "veteran", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vice", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "victim", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "viet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vietnam", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "violence", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "violent", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "virgin", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vision", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "visit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vodka", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "voice", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "volt", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "voluntary", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vote", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "vous", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wake", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "walk", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "want", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "war", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "ward", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wary", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "was", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "watch", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "water", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "watergate", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "way", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wc", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "we", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weak", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weapon", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wear", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weather", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weber", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "week", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weekend", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weigh", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weight", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "weird", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "well", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "went", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "were", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "what", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "when", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "where", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "whether", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "which", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "while", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "whiskey", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "whisper", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "white", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "who", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "whom", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "whore", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "whose", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "why", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wicked", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wife", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "will", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wimp", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "win", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wine", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wipe", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wiretap", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wise", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wish", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wit", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "with", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "woman", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "women", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "won", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "won't", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wonder", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wont", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wood", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "word", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "work", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "world", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "worry", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "worse", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "worst", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "worth", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "worthwhile", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "would", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "wrong", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yawn", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yeah", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "year", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yep", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yes", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yesterday", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yet", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "you", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "young", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "your", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yours", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "youth", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "yoyo", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "adjective", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "adverb", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "article", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "auxiliary", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "conjunction", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "interjection", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "modal", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "mode", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "name", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "not", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "noun", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "participle", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "past", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "preposition", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "progressive", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "tense", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "verb", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "what", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    SAFE_STRCPY(dictionary[dict_count].word, "word", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].canonical, "", MAX_WORD_LENGTH);
    SAFE_STRCPY(dictionary[dict_count].pos, "", MAX_WORD_LENGTH);
    dict_count++;

    printf("Loaded %d dictionary entries\n", dict_count);
}
