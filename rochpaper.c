#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player_choice, computer_choice;
    srand(time(0)); // Seed the random number generator
    
    printf("Let's play Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    scanf("%d", &player_choice);
    
    // Validate player's choice
    if (player_choice < 1 || player_choice > 3) {
        printf("Invalid choice. Please select a number between 1 and 3.\n");
        return 1;
    }
    
    // Generate computer's choice
    computer_choice = rand() % 3 + 1;
    
    // Determine the winner
    if (player_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((player_choice == 1 && computer_choice == 3) ||
               (player_choice == 2 && computer_choice == 1) ||
               (player_choice == 3 && computer_choice == 2)) {
        printf("Congratulations! You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    
    return 0;
}