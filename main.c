#include "parry.h"

int main(void) {
    char input[MAX_INPUT_LENGTH];
    char* response;
    
    printf("=== PARRY - A Paranoid Chatbot (C Port) ===\n");
    printf("Original LISP version by Kenneth Colby, 1971\n");
    printf("C Port implementation, 2024\n");
    printf("Type 'quit', 'exit', or 'bye' to end the conversation.\n");
    printf("=============================================\n\n");
    
    // Initialize PARRY
    init_parry();
    
    printf("PARRY: Hello. I'm Frank.\n\n");
    
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
        
        // Check for exit commands
        if (strlen(input) == 0) {
            continue;
        }
        
        char input_lower[MAX_INPUT_LENGTH];
        SAFE_STRCPY(input_lower, input, MAX_INPUT_LENGTH);
        to_lower(input_lower);
        
        if (strcmp(input_lower, "quit") == 0 || 
            strcmp(input_lower, "exit") == 0 || 
            strcmp(input_lower, "bye") == 0) {
            printf("PARRY: Goodbye. Take care.\n");
            break;
        }
        
        // Process input and get response
        response = process_input(input);
        
        // Display response with emotional state
        printf("PARRY: %s\n", response);
        
        // Show emotional state (for debugging/interest)
        if (parry_state.flare_active || parry_state.anger > 8 || 
            parry_state.fear > 8 || parry_state.mistrust > 10) {
            printf("       [Emotional State - Anger:%d, Fear:%d, Mistrust:%d, Hurt:%d",
                   parry_state.anger, parry_state.fear, 
                   parry_state.mistrust, parry_state.hurt);
            if (parry_state.flare_active) {
                printf(", Flare:%s", parry_state.current_flare);
            }
            printf("]\n");
        }
        
        printf("\n");
    }
    
    printf("\nConversation ended. %d turns completed.\n", parry_state.conversation_turn);
    printf("Final emotional state: Anger=%d, Fear=%d, Mistrust=%d, Hurt=%d\n",
           parry_state.anger, parry_state.fear, parry_state.mistrust, parry_state.hurt);
    
    return 0;
}
