#include "parry_complete.h"

int main(void) {
    char input[MAX_INPUT_LENGTH];
    char* response;
    
    printf("========================================================\n");
    printf("        PARRY - Paranoid Patient Simulation\n");
    printf("========================================================\n");
    printf("Original LISP implementation by Kenneth Colby, 1972\n");
    printf("Stanford Artificial Intelligence Laboratory\n");
    printf("C recreation - faithful 1-to-1 port, 2024\n");
    printf("========================================================\n\n");
    
    // Initialize PARRY
    init_parry();
    
    printf("\n========================================================\n");
    printf("PARRY is ready. Type 'quit', 'exit', or 'bye' to end.\n");
    printf("========================================================\n\n");
    
    // Initial greeting from PARRY
    printf("PARRY: Hello. My name is Frank.\n\n");
    
    // Main conversation loop
    while (1) {
        printf("You: ");
        fflush(stdout);
        
        // Get user input
        if (!fgets(input, sizeof(input), stdin)) {
            break;
        }
        
        // Remove newline
        input[strcspn(input, "\n")] = 0;
        
        // Check for empty input
        if (strlen(input) == 0) {
            parry_state.silence_count++;
            if (parry_state.silence_count > 2) {
                printf("PARRY: Are you still there?\n\n");
                parry_state.mistrust += 1;
            }
            continue;
        }
        
        parry_state.silence_count = 0;
        
        // Check for exit commands
        char input_lower[MAX_INPUT_LENGTH];
        SAFE_STRCPY(input_lower, input, MAX_INPUT_LENGTH);
        to_lower(input_lower);
        
        if (strcmp(input_lower, "quit") == 0 || 
            strcmp(input_lower, "exit") == 0 || 
            strcmp(input_lower, "bye") == 0 ||
            strcmp(input_lower, "goodbye") == 0) {
            
            if (parry_state.anger > 10) {
                printf("PARRY: Good riddance!\n");
            } else if (parry_state.fear > 10) {
                printf("PARRY: I have to go now.\n");
            } else {
                printf("PARRY: Goodbye. Take care.\n");
            }
            break;
        }
        
        // Process input and get response
        response = process_input(input);
        
        // Display response
        printf("PARRY: %s\n", response);
        
        // Show emotional state if significantly elevated
        if (parry_state.flare_active || 
            parry_state.anger > 8 || 
            parry_state.fear > 10 || 
            parry_state.mistrust > 11 || 
            parry_state.shame > 6) {
            
            printf("       [");
            
            if (parry_state.flare_active) {
                printf("FLARE:%s ", parry_state.current_flare);
            }
            if (parry_state.anger > 8) {
                printf("ANGRY:%d ", parry_state.anger);
            }
            if (parry_state.fear > 10) {
                printf("FEARFUL:%d ", parry_state.fear);
            }
            if (parry_state.mistrust > 11) {
                printf("SUSPICIOUS:%d ", parry_state.mistrust);
            }
            if (parry_state.shame > 6) {
                printf("ASHAMED:%d ", parry_state.shame);
            }
            
            printf("]\n");
        }
        
        printf("\n");
        
        // Log to file
        save_conversation_log(input, response);
    }
    
    printf("\n========================================================\n");
    printf("Conversation ended after %d turns.\n", parry_state.conversation_turn);
    printf("Final emotional state:\n");
    printf("  Anger: %d (baseline: %d)\n", parry_state.anger, parry_state.anger0);
    printf("  Fear: %d (baseline: %d)\n", parry_state.fear, parry_state.fear0);
    printf("  Mistrust: %d (baseline: %d)\n", parry_state.mistrust, parry_state.mistrust0);
    printf("  Shame: %d (baseline: %d)\n", parry_state.shame, parry_state.shame0);
    printf("========================================================\n");
    
    return 0;
}
