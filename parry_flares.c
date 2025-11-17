#include "parry_complete.h"

// Flare concept data parsed from RDATA
void load_flare_system(void) {
    flare_count = 0;

    SAFE_STRCPY(flare_concepts[flare_count].name, "RACKETSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 17;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "MAFIASET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "GANGSTERSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 15;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "BOOKIESET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "PERSONSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 12;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "GANGSTERSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "CHEATSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 10;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "MONEYSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "BOOKIESET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 9;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "RACKETSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "GAMBLERSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 7;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "HORSERACINGSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "MONEYSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 6;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "GAMBLERSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "HORSERACINGSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 5;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "BOOKIESET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "POLICESET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 4;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "GANGSTERSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "ITALIANSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 3;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "GANGSTERSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    SAFE_STRCPY(flare_concepts[flare_count].name, "HORSESET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].weight = 1;
    SAFE_STRCPY(flare_concepts[flare_count].next_flare, "HORSERACINGSET", MAX_WORD_LENGTH);
    flare_concepts[flare_count].is_indirect = false;
    flare_concepts[flare_count].is_sensitive = true;
    flare_concepts[flare_count].story_count = 0;
    flare_count++;

    printf("Loaded %d flare concepts\n", flare_count);
}
