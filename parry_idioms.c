#include "parry_complete.h"

// Idiom data parsed from IDIOM.ALF
void load_idioms(void) {
    idiom_count = 0;

    SAFE_STRCPY(idioms[idiom_count].pattern, "a living", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "JOB", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "about me", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "IN SELF", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "after work", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "IN HOBBY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "after you pd", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILL YOU", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "against you", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "GRUDG YOU", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "all right", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WELL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "at ease", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CALM", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "at the top", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CHIEF", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "bay meadows", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "RACES", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "be you from", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BE YOU HOME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "be you sure", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BE NOT YOU RIGHT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "be your any from", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BE YOU ANY HOME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "blow job", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SCREW", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "catch on", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LEARN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "child hood", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "YOUTH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "cop out", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "NOT REPLY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "cosa nostra", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "MAFIA", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "do away with", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "doing away with", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "down in the dumps", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SAD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "down the tube", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "UPSET", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "drop dead", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SHIT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "eat it", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SHIT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "emergency room", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HOSPI", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "find that hard", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "COULD NOT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "find out", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LEARN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get a kick out of", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LIKE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get along", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "GTLNG", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get even", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HARM", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get even with", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HARM", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get into", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "COME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get off", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LEAVE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get rid of", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "get up", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SLEEP", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "give it up", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "STOP", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "give up", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "STOP", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "go ahead", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "TELL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "go home", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LEAVE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "go on", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HAPPE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "go to piece", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "UPSET", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "god damn", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SHIT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "god father", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "MOVIE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "have a fix", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DRUGS", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "have it in for", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "GRUDG", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "have on", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LEARN IN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "have the idea", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "THINK", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "have to", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "NEED IN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "high school", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SCHOO", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "hit man", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILLE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "hit the bottle", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DRINK", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "hopeless case", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CRAZY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "hot and cold", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "PAINS", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how come", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WHY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how do you do", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HELLO", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how far", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HWMCH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how long", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HWLNG", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how long ago", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WHEN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how many", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HWMNY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how many times", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HWMCH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how much", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HWMCH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "how often", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HWMCH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "i beg your pardon", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WHAT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "in danger", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SCARE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "in error", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WRONG", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "in general", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SPECI", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "in particular", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SPECI", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "keep tab", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SPY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "keep track", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KNOW", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "keep up with", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "UNDRS", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "keep your eye on", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DOUBT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "kind of", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "TYPE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "knock any up", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SCREW ANY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "known by", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "NAME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "life after death", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "PRAY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "like this pd", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "ODD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "look down any", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BLAME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "look for", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WANT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "los angeles", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CITY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "love life", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HORNY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "make fun", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LAUGH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "make love", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SCREW", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "make up", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "MAKE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "may i have", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WHAT BE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "mother and father", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DAD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "move on", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "TELL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "my shorts", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SHIT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "occur to any", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "ANY THINK", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "of course", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "RIGHT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "off your rocker", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CRAZY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "on any guard", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DOUBT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "on any nerve", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "ANY NERVE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "only child", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SISTE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "opposite sex", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "GIRL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "out of the way", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "ODD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "out to get", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "outside yourself", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "ODD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "palo alto", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CITY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "place of birth", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BRTHP", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "poke fun", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LAUGH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "posing as", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "NOT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "put down", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BLAME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "put any down", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BLAME ANY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "put any on", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LIAR", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "rather than", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "OTHER IN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "rub any out", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILL ANY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "san francisco", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CITY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "san jose", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HOME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "screw loose", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CRAZY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "shut up", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BAD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "since when", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HWLNG", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "sleep furious", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CHMSK", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "sleep with", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SCREW", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "slow down", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "PAINS", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "so long", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BYE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "so that", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "AND", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "son of a bitch", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SHIT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "stay away", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "FEAR", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "straight jacket", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "CRAZY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "suppose to", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "COULD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "take advantage of", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "MISTR", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "take off", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "LEAVE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "take place", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HAPPE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "take your own life", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SUICI", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "the john", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WC", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "the us", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "USA", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "this way", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "ODD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "tire of", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BORE IN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "too bad", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "TOUGH", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "united state", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "USA", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "up to", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DOING", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "up your", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SHIT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "ups and downs", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SAD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "used to", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DO", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "vice president", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "VEEP", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "viet nam", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "ARMY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "watch for", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DOUBT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "watch out for", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "DOUBT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "what about", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "IN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "what be your pd", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WHAT BE YOU NAME", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "what do any do", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HOW PEOPL IT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "what for", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WHY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "what times", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WHEN", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "what way", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HOW", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "white house", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "PRES", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "wipe out", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "KILL", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "wise ass", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SHIT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "wise guy", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "BAD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "work out", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "HAPPE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "worth living", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "SUICI", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "worth while", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "GOOD", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "would like", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "WANT", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "yes or no", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "REPLY", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "you happen to", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "YOU", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "you mind", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "YOU LIKE", MAX_INPUT_LENGTH);
    idiom_count++;

    SAFE_STRCPY(idioms[idiom_count].pattern, "your living", MAX_INPUT_LENGTH);
    SAFE_STRCPY(idioms[idiom_count].replacement, "JOB", MAX_INPUT_LENGTH);
    idiom_count++;

    printf("Loaded %d idioms\n", idiom_count);
}
