#include "parry_complete.h"

// Synonym data parsed from SYNONM.ALF
void load_synonyms(void) {
    synonym_count = 0;

    SAFE_STRCPY(synonyms[synonym_count].word, "a", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "able", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ABLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ably", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ABLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "abnormal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "about", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "above", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "absurd", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "accept", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "accident", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "accord", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "accusatory", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "accuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ache", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "acid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "acquaint", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KNOW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "act", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "action", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ACTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "active", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "activity", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ACTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "acts", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ACTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "actually", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "add", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "addict", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "addiction", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "address", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADDRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "adios", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BYE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "adjust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "administrate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "admire", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "admission", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "admitted", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "advantage", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "advice", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "advise", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "affection", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "affectionate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "afraid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "after", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "afternoon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TODAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "again", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "against", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "age", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "aggravate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "agitate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "agnew", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ago", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "agree", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "agreeable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COOPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ahead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "aid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alcohol", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alcoholic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alias", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alioto", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ALIOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "all", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "allow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "aloha", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELLO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ALONE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "along", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "aloud", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "already", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEFOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alright", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "also", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "although", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "alto", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "always", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OFTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ambition", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLANS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "america", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "USA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "american", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "amid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "amidst", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "amount", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HWMCH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "amphetamine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "amuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "amusement", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "an", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "analyst", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ancestry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "and", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "angeles", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anger", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "angry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "animal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "annoy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "another", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OTHER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "answer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REPLY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anxiety", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anxious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "any", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anybody", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anyhow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anymore", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anyone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anything", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anytime", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EVER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anyway", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "anywhere", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLACE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "apartment", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADDRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "apologize", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SORRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "appear", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "appearance", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "appears", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEMS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "appetite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "appreciate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "approve", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "APPRO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "argue", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARGUE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "argumentative", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "arithmetic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "armed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "arms", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "army", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "around", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "arrest", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "arrive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "as", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ask", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ASK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "asleep", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SLEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ass", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "asshole", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "assist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "assistance", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "assume", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "assure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "assured", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ABLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "asylum", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOSPI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "at", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "atheist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "attached", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "attack", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "attempt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "attention", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ATTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "attitude", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEELI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "attract", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "attractive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "authoritative", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STRIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "auto", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "automobile", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "autorace", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "avenue", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADDRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "average", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "avoid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "aware", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KNOW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "away", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "awful", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TOUGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "baby", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHILD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bachelor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "back", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "background", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "backward", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bad", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "baddie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "baker", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAKER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ball", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "banana", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BANAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bang", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bank", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "barf", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "baseball", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "basketball", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bastard", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bath", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bathroom", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bay", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "be", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bean", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "beat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "beautiful", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "became", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "because", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "become", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SLEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "beer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "before", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEFOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "beg", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ASK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "began", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "START", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "begin", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "START", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "behave", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "behavior", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ACTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "behind", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "belief", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "believe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "belong", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BELON", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "below", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "berkeley", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CITY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "berserk", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "beside", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "besides", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "best", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEST", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "better", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEST", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "between", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bible", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "big", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bill", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bin", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOSPI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bird", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "birth", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "birthdate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "birthday", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "birthplace", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRTHP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bisexual", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bitch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bizarre", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "black", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COLOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "blame", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "blank", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEMOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "blocked", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "blood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bloody", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "blow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "blue", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "blush", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLUSH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "body", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bomb", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bonanno", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BANAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bonzo", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "book", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "READ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "booked", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bookie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bookmake", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "boot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bootleg", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "booze", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bore", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "born", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "borrow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "boss", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHIEF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bother", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bottle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bowel", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BOWEL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "boy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MALE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "boyfriend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "brain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "branch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "brandy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bread", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "break", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "breakfast", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "breath", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "breathe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HUMAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bribe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bridge", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bright", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "brilliant", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bring", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRING", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "broadcast", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "brood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "brother", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SISTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "brought", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRING", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "buck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "buddy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bug", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BUG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "build", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEIGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "building", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADDRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "buildings", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bullet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bullshit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bum", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bunch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bundle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "business", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "busy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPEND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "but", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "buy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "by", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "bye", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BYE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cage", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAGE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "california", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STATE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "call", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CALL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "calm", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CALM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "came", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "can", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "capable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ABLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "capital", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAPIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "capone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ALIOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "captive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAGE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "car", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cards", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "care", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "career", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cars", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "case", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cash", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "catch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "catholic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "JEW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cause", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAUSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cell", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "certain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chair", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "change", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHANG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chauvinist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cheat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHEAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "check", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHECK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cheer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chess", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chest", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chief", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHIEF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chieftain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHIEF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "child", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHILD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "childhood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "YOUTH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "children", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHILD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "china", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chomsky", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHMSK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "christ", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "christmas", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "chuck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "church", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cigar", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMOKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cigarette", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMOKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "city", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CITY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clarify", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clear", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CLEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clever", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "climate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clinic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOSPI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clock", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "close", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clothes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cloudy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clown", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "clubs", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "co", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cocaine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cock", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "coffee", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COFFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "colby", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COLBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cold", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "college", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COLLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "color", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COLOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "combat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "come", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "comfort", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMFO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "comfortable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CALM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "comma", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMMA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "commie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMMI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "commit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "committed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAGE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "communicate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ATTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "communism", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMMI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "communist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMMI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "company", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "JOB", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "compel", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "complaint", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "complement", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "compulsive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "compunction", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NEED", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "computer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMPU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "con", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "concentrate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEAS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "concern", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "concerning", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "conclusion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CONCL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "condition", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "confide", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TRUST", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "confident", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ABLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "confuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PUZZL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "connected", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "conscious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "consider", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "console", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMFO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "conspiracy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "constipate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BOWEL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "contact", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "continue", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "contract", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "control", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "conversation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "converse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "convicted", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "convicts", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "convince", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CONVI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "convulsion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cool", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cooperate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COOPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cop", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "copout", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "correct", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cosa", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cost", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cough", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "could", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "count", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "country", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "course", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "court", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "coward", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "coworker", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cram", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "crap", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "craps", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "crazy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "creep", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "crime", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "criminal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "critical", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRITI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "criticize", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "crook", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "crooked", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cross", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "crowds", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "crush", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cunt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cured", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEST", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "curious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "INTER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "cute", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "da", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dad", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dance", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "danger", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dark", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "date", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DATE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "day", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "daydream", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEAS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "deal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TREAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "death", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "decay", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "decide", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "deciding", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEAS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "decision", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEAS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "defensive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "definite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dejected", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "delusion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "delusional", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "democrat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dependent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEPEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "depends", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "depress", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "descent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "describe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "desire", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "despair", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "desperate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "destroy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "detective", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "deutsch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEUTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "deviate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "devil", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dexedrine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "diagnosis", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CONCL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dice", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "die", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "diet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "difference", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SUM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "different", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHANG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "difficult", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "difficulty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dig", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dime", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dinner", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "direct", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAIR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disagree", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARGUE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disagreeable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NASTY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disappear", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEMOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disappoint", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disbelieve", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARGUE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "discharge", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "discourage", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "discover", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEARN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "discuss", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disease", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disgust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dishonest", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dislike", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HATE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dispute", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARGUE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dissatisfy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dissolved", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "distrust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOUBT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "disturb", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "divide", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "divorce", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DIVOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dizzy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "do", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "doctor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "doing", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOING", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dollar", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dominating", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STRIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "done", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOING", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dope", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "doper", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "double", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "doublecross", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "doubt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOUBT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dough", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "down", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "downhearted", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "downs", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dr", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "draft", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dream", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DREAM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "drink", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "drive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "drop", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "drug", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "drunk", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dts", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dull", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dumb", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dumbass", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dumbell", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dumbshit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dummy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dumps", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dung", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "during", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "dying", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "early", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "earn", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "earthquakes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ease", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CALM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "easily", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OFTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "eat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "eavesdrop", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ecstasy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "educated", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "education", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCHOO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "either", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "elaborate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "elate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "electric", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHOCK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "electricity", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "electrify", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHOCK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "elevators", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "else", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OTHER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "embarrass", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLUSH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "embarrassed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "emergency", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "emotion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "emotional", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "employ", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "end", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STOP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "enemy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "energy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "engaged", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "english", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "enjoy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "enjoyable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "enjoyment", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "enormous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "enough", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "entertain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "entertainment", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "episodes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FITS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "error", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WRONG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "escape", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "espanol", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEUTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "especially", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ethnic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "euphoria", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "evade", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "evasive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "even", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "evening", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TODAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "event", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NEWS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ever", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EVER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "everybody", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "everyone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "everything", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "evidence", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PROOF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "evil", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "exactly", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "exalt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "exaltation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "example", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "except", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "excitable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "excite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "excitement", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "exercise", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "exhiliarate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "exist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "expansive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "expect", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "expectation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLANS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "experience", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EXPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "expert", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EXPRT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "explain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "eye", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fact", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STORY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fag", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "faggot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "failure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "faint", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fair", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAIR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fairy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fake", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "falling", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "false", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "familiar", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "family", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAMLY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fantasy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "far", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fart", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fascinate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "INTER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fast", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fatal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fathead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "father", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "favor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "favorite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fbi", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fear", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "feed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "feel", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEEL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "feeling", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEELI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "feet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fellow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MALE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "felt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEEL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "female", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "few", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fight", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARGUE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "figure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEARN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "film", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MOVIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "finally", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "finances", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "financial", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "find", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FIND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fingers", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fink", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fire", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fireman", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAKER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "first", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "START", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fish", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FITS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fix", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "flag", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "flipped", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "flow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fly", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "folks", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAMLY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "follow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOLLO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fond", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "food", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fool", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "foot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "football", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "for", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "force", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ford", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "foreign", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "forever", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OFTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "forget", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEMOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "foul", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "frame", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "francais", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEUTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "francisco", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fraud", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "freak", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "free", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "french", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "frequent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OFTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "friend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fright", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "frighten", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "from", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "frustrate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fuck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fuckyou", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "full", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fun", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "funny", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "furious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "furthermore", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fussy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUSSY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "future", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "fuzz", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gamble", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gambler", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LUCKY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gamblers", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "game", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gangland", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gangleader", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHIEF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gangster", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gather", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gay", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gender", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEX", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "general", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "german", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "get", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gin", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "girl", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "girlfriend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "give", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "glad", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gloomy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "go", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "goal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLANS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "god", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "goddam", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "goddamn", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "godfather", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MOVIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "golf", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "good", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "goodbye", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BYE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "governor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOVER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "grad", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCHOO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "grade", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCHOO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "graduate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCHOO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "grass", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "great", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "green", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COLOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "greenie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "greens", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "greetings", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELLO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "grudge", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GRUDG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "guard", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "guess", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "guilt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "guilty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gun", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gut", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BOWEL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "guy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MALE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "gyp", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHEAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ha", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "habits", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ACTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "habitual", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OFTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hablas", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPREC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hair", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "half", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "halfwit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hallucinate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hand", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "handsome", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hang", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "happen", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "happy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hard", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hardly", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "harm", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HATE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "have", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "he", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "head", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "headache", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heads", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "health", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "healthy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hear", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heard", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heart", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heaven", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heavy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heel", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "height", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TALL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heights", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "held", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOLD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hell", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hello", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELLO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "help", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "henchman", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "henchmen", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "her", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hereafter", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "heroin", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "herself", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SELF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hey", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ATTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hi", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELLO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hide", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "high", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TALL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "highstrung", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "him", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hippie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hippy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hire", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "JOB", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "his", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hobby", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hold", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOLD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hole", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "home", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "homely", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hometown", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "homicidal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "homo", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "homosexual", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "honest", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAIR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "honey", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hoodlum", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hope", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hopeless", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "horny", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "horrible", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TOUGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "horse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "horserace", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "horsetrack", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hospital", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOSPI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hospitalization", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOSPI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hospitalized", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PATIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hostile", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hour", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "house", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADDRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "how", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "howdy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELLO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "however", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "human", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HUMAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "humorous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hungry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hurt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "husband", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HUBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hyper", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hypnosis", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hypnotism", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "hypnotize", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "i", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "I", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "idea", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ideas", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEAS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "idiot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "if", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ignore", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ill", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "illegal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "imaginary", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "imagination", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "imagine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "imagining", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "immediate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "immigrant", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "immoral", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "impatient", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "impeach", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "impolite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "importance", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POINT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "important", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POINT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "imposter", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "impotent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "impulses", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEAS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "impulsive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUSSY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "in", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "inattentive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "incorrect", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WRONG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "incriminate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "indeed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMMA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "inferior", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "infidelity", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "influence", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "information", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STORY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "initiative", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ABLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "injure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "injury", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "insane", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "insecure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "inside", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "insomnia", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SLEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "instead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OTHER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "insult", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "intelligence", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IQ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "intelligent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "intend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "intercourse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "interest", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "INTER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "interview", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "interviewer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "into", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "iq", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IQ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "irritable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "irritate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "isolated", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ALONE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "issue", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POINT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "it", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "italian", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "italiano", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DEUTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "italy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jackass", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jacket", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jail", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jealous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUSSY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jealousy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUSSY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jerk", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jesus", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jew", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "JEW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jillion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NUMBR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jittery", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "job", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "JOB", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jockey", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "joe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "john", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "join", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TRUST", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "joint", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "joke", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "jose", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "joy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "judgement", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEELI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "junk", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "junkie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "just", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "keep", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOLD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "keyed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "kick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "kid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "kidnap", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "kill", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "killer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "kind", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TYPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "kinky", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "kiss", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "knife", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "knives", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "knock", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "know", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KNOW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "known", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KNOW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "la", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CITY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "laid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "language", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "las", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "last", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEFOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lately", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "later", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "laugh", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LAUGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "laughing", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "law", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lawyer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAUSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "leader", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHIEF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "leak", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "learn", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEARN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "least", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "leave", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lecher", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "left", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "legs", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "leisure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lesbian", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "less", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "let", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "liar", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "life", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "like", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "likeable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "line", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "liquor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "listen", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ATTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "little", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "live", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "living", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "loan", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "loathe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HATE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "local", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "located", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lock", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAGE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "logical", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ALONE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lonely", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ALONE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lonesome", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ALONE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "long", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LONG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "look", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "looks", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "loony", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "loose", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lord", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "los", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lose", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lost", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lottery", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lousy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lovable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "love", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lover", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "low", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lsd", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "luck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LUCKY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lucky", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LUCKY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lump", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lunatic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lunch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "lying", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "machine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMPU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mad", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mafia", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MAFIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mafiosi", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MAFIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "main", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "make", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "male", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MALE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "man", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MALE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "manic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "many", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "marijuana", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "marine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "marital", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "marriage", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "married", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "masochist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "masochistic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "masturbate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "math", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "matter", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "may", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "maybe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "me", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "meadows", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "meal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mean", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "meaning", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAUSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "meant", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "meathead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "medical", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "medication", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "medicine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "meet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KNOW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "melancholy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "member", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "memory", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEMOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "men", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MALE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mental", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SANE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mention", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "menu", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "messages", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mexican", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mice", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "microphone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "middle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "might", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "military", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mind", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "I", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "minus", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLUS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "minute", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mischief", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "miss", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "missing", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mission", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mistake", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WRONG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mistreat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MISTR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mistrust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOUBT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "misunderstand", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MISUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "misunderstood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MISUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mob", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mobster", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mom", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MOM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "moment", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "money", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "month", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "moon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "more", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "moreover", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "morning", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TODAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "most", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mother", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MOM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "motherfucker", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mouth", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "move", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "movement", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "movie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MOVIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mr", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MALE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "mrs", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ms", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "much", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "multiply", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "murder", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "murderer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "murderous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "music", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MUSIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "must", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "my", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "I", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "myself", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SELF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nag", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nam", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "name", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "narcotic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nasty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NASTY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "national", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "natural", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nature", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nausea", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BOWEL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "navy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nazi", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMMI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "near", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "necessary", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NEED", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "neck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "need", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NEED", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "needle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "negative", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "neighborhood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "neighbors", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "neither", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nerve", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NERVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nervous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NERVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ness", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "neurotic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "never", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "new", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "INTER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "news", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NEWS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "newspaper", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NEWS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "next", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nice", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nickel", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "night", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nightmare", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DREAM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nincompoop", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nixon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "no", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nobody", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "noises", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "none", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "normal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nose", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nostra", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "not", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NOT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "notice", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "noticed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "now", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EVER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "numb", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "number", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NUMBR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nurd", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nurse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NURSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nut", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "nutty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "observant", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "observe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WATCH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "obtuse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "obvious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CLEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "occupation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "occupy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPEND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "occur", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "odd", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "odor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "of", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "off", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "offend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "often", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OFTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "oh", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ok", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "okay", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "old", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OLD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "on", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "once", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EVER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "one", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "only", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "open", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "operation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "operator", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "opinion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "opinionated", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "opposite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "optimistic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "or", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "organization", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "organizations", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "organized", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "orgasm", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ornery", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "other", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OTHER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "others", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PATIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ought", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "our", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "out", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "outlook", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEELI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "outpatient", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PATIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "outside", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "over", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "overnight", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "oversolicitous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STRIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "owe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OWE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "own", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "paid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "palo", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "paper", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NEWS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "paradise", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "paranoia", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "paranoid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pardon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "parent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAMLY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "parle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPREC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "parlez", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPREC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "part", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "particular", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "party", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PARTY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pass", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "past", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "patient", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PATIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "patricia", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "patrick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pattern", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ACTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pay", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "payroll", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pd", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "peculiar", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "peeve", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "penis", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "penny", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "people", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "perceptive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "perhaps", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "periods", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FITS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "permissive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STRIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "permit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "persecute", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "person", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HUMAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "personal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "personality", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HUMAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "persuade", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CONVI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pervert", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pessimistic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "phobia", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "phone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "phony", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "physical", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "physician", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PICK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "piece", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pig", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pills", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pinhead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "piss", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pissed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pistol", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "place", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLACE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "plan", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "planes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "plans", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLANS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "play", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pleasant", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "please", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pleased", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pleasure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "plenty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "plot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "plug", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMPU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "plus", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLUS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "point", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POINT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "poison", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "poke", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "poker", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "police", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "policeman", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "policemen", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "polite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "political", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "politics", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pony", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "poor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pornography", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "posing", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "position", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "possible", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POSSI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "potty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pound", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "poverty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "powerful", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pray", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "precise", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "prefer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "preoccupy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "presence", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "present", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "presidency", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "president", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pretty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "previous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEFOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "price", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HWMCH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "prior", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEFOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "prison", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "problem", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "product", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SUM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "profession", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "program", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMPU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "proof", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PROOF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "prostitute", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "protestant", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "JEW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "proud", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "prove", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PROOF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "psychiatric", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "psychiatrist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "psychological", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SANE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "psychopathic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "psychosis", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "psychotic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pull", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "punk", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "purpose", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAUSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pursue", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "pussy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "put", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRING", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "puzzle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PUZZL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quarrel", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARGUE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quarrelsome", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "queen", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "queer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "question", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ASK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quicktempered", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quiet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STOP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "quotient", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SUM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "race", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COLOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "races", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "racetrack", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "racing", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "racket", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "racketeer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "radical", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHOCK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "radio", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rage", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "raised", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rank", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rape", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rather", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rational", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "raw", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rays", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reach", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "react", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REPLY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "read", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "READ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ready", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reagan", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOVER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "real", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "realize", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KNOW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "really", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reared", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reason", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CAUSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reasonable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reassure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "recall", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEMOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "receive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "recent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "recreation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "recur", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OFTEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reds", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reefer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "regular", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rejecting", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "relate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "relationship", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "relax", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CALM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "relaxation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOBBY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "release", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LEAVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "religion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "religious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "remain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "remark", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STORY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "remarks", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "remember", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MEMOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reno", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "repeat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "repetitive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AGAIN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reply", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REPLY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "republican", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reputation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "resentful", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "reserved", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "residence", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADDRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "respect", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "respond", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REPLY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "responsive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COOPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rest", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "restless", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "revolver", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rich", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ridicule", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LAUGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ridiculous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rifle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "right", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rings", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rituals", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ACTS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rob", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHEAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "robber", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rock", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MUSIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rocker", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "roman", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rome", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "room", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WARD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "root", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SUM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "roulette", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rub", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "rum", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "run", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FORCE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sad", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sadist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sadistic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "safe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CALM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "said", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "salary", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "same", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "san", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sane", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SANE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sarcastic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SARCA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "satan", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "satisfactory", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "satisfy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HAPPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "saturday", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "saw", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "say", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "scare", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "schizophrenia", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "schizophrenic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "schmuck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "school", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCHOO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "screw", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCREW", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "screwy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sears", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "season", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "secret", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SECRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "secretly", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "secure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CALM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sedative", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "see", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "seek", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "seem", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "seems", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEMS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "seen", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "self", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SELF", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "selfish", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "send", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRING", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sensation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEELI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sense", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SENSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sensible", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sensitive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BRING", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "serious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "seriously", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SARCA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "service", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "set", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "several", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sex", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEX", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sexlife", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sexual", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sexy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shaky", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shall", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "share", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TRUST", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sharp", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "she", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shithead", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shock", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHOCK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shoes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shoot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shoplift", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHEAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "short", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shorts", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shot", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shotgun", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "should", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shove", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "show", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shower", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shrink", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shut", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shutup", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "shy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sibling", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SISTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sicilian", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sicily", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ITALY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sickie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sickness", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "side", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sign", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "simulation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COMPU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sin", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "since", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sincere", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "single", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "singled", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PICK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sister", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SISTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "situated", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "situation", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SITUA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "skin", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "slander", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BLAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sleep", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SLEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "slept", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SLEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "slob", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "slow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHECK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "slug", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "smart", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "smash", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HARM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "smell", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TASTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "smells", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "smith", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "smoke", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMOKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "smuggle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "snakes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "snicker", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LAUGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "snotty", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NASTY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "so", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "society", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "soldier", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "solution", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "some", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "somebody", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "someone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "something", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sometime", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EVER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "somewhat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "son", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHILD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sonny", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sonofabitch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "soon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sore", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sorry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SORRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sort", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TYPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sound", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sounds", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SEEMS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spaces", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spanish", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANCES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spare", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FREE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "speak", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "special", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "specific", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "specifically", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPECI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "speed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spell", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spells", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FITS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPEND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spiders", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spirits", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spoke", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sport", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spouse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sprechen", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPREC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "spy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "square", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAIR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "squeal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stab", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "staff", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stand", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stare", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "start", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "START", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "state", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STATE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "statement", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STORY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stationed", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "status", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SITUA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stay", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "steal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHEAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stew", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "still", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stink", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stockroom", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stomach", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BOWEL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stoned", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stoolie", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stoolpigeon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stop", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STOP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "storms", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "story", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STORY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "straight", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAIR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "strain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "strange", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stranger", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STRAN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "strangle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "street", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADDRE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "strict", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STRIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "strong", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "strung", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stubborn", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "student", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCHOO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "study", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCHOO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "stupid", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "subject", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TOPIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "subtract", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ADD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "success", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ABLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "such", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sudden", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suggest", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suggestive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suicidal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SUICI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suicide", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SUICI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sum", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SUM", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sunny", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "superior", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRITI", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "supernatural", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PRAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "supper", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "EAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "support", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HELP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suppose", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suspect", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOUBT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suspicion", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOUBT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "suspicious", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DOUBT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "swallow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sweepstakes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "swell", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "swindle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHEAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "swindler", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CROOK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "sympathize", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "syndicate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tab", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "take", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "talk", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tall", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TALL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tap", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "taste", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TASTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tastes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "taxes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tea", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "teach", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "telephone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "television", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tell", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "temper", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ten", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NUMBR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tennis", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tense", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "terrible", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "testify", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "than", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thank", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THANK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "that", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "the", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "theft", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "their", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "them", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "then", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "therapist", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "therapy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "there", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THERE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "therefore", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "these", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "they", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thief", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thieves", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thing", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "think", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "this", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thorazine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "those", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "though", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thought", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thoughts", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IDEAS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "threat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "throat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "through", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "thug", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ANGRY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tight", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "time", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "times", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PLUS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tingle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tire", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tiresome", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "to", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "today", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TODAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "toes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BODY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "told", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tomorrow", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TOMOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tone", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tonight", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TODAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tonite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TODAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "too", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "top", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "topic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TOPIC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "torpedo", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "torture", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "touchy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TEMPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tough", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TOUGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "toward", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "town", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CITY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "track", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RACES", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "traffic", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trains", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tranquilizer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "transmitted", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "transvestite", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trap", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRAME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "treat", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TREAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "treatment", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PILLS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tremble", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HYPER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trial", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FUZZ", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trick", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CHEAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tricky", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trips", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DRUGS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trouble", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "troublesome", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "true", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TRUST", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "trustworthy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FAIR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "try", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tube", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "turd", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "turkey", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "turn", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "tv", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TV", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "two", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NUMBR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "type", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TYPE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ugly", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ulcer", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unbalance", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "uncertain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WRONG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "uncle", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UNCLE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "uncomfortable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "uncontrollable", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "uncooperative", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "under", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "underneath", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "understand", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UNDRS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "understanding", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "understood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CLEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "underworld", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "uneasy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NERVE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "uneducated", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unfair", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unfriendly", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NASTY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unhappy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "united", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unjust", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LIAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unkind", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NASTY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unlucky", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LUCKY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unnatural", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unpleasant", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "NASTY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unreal", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unresponsive", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ORNER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unsuccessful", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unsure", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WRONG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unusual", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ODD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "unworthy", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUILT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "up", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "upon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ups", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "upset", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "UPSET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "us", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "usa", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "USA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "use", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "used", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TAKE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "usual", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "REAL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "va", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vain", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vd", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "veep", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vegas", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "very", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "veteran", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VET", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vice", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRIME", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "victim", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "viet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vietnam", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "violence", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "violent", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "virgin", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HORNY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vision", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TASTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "visions", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "visit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VISIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "visitor", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FRIEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vodka", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "voice", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "HALLU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "volt", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHOCK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "voluntary", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "VOLUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vote", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "vous", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SIE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wake", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SLEEP", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "walk", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "want", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "war", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "ARMY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "ward", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WARD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wary", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SCARE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "watch", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WATCH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "watcher", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "water", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FOBIA", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "watergate", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "POLIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "way", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wc", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WC", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "we", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weak", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PAINS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weapon", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GUN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wear", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOOKS", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weather", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEATH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weber", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEBER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "week", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weekend", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "YESTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weigh", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEIGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weight", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WEIGH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "weird", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "well", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "what", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whatever", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "when", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whenever", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "where", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHERE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whether", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "which", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "while", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHEN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whiskey", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whisper", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "TELL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "white", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COLOR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "who", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whom", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHO", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whore", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SHIT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "whose", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHAT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "why", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WHY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wicked", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wife", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WIFE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "will", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "willing", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wimp", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "win", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wine", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BEER", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "winner", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LUCKY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "winnings", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "MONEY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wipe", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "KILL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wiretap", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SPY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wise", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SMART", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wiseass", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wish", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WANT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wit", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "with", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "within", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "without", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "IN", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "woman", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "women", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GIRL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "won", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "LOSE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wonder", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "THINK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wood", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "woodchuck", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "A", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "word", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "STORY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "work", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WORK", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "world", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "PEOPL", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "worry", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "FEAR", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "worse", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "SAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "worst", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BAD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "worth", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "worthwhile", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "GOOD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "would", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "COULD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "wrong", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "WRONG", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yawn", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "BORE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yeah", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "year", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "DAY", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yep", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yes", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "RIGHT", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yesterday", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "YESTE", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yet", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "AND", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "you", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "YOU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "young", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "OLD", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "your", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "YOU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yourself", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "YOU", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "youth", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "YOUTH", MAX_WORD_LENGTH);
    synonym_count++;

    SAFE_STRCPY(synonyms[synonym_count].word, "yoyo", MAX_WORD_LENGTH);
    SAFE_STRCPY(synonyms[synonym_count].synonym, "CRAZY", MAX_WORD_LENGTH);
    synonym_count++;

    printf("Loaded %d synonyms\n", synonym_count);
}
