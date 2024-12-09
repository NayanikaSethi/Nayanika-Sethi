#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int computer_choice, user_choice;
    char *choices[] = {"Stone", "Paper", "Scissors"};

    // Seed the random number generator with current time
    srand(time(NULL));

    // Generate a random number between 0 and 99
    computer_choice = rand() % 100;

    // Determine the computer's choice based on the random number
    if (computer_choice < 33) {
        computer_choice = 0; // Stone
    } else if (computer_choice < 66) {
        computer_choice = 1; // Paper
    } else {
        computer_choice = 2; // Scissors
    }

    printf("Enter your choice (0 for Stone, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &user_choice);

    // Check for invalid input
    if (user_choice < 0 || user_choice > 2) {
        printf("Invalid input. Please enter a number between 0 and 2.\n");
        return 1;
    }

    printf("Computer chose: %s\n", choices[computer_choice]);
    printf("You chose: %s\n", choices[user_choice]);

    // Determine the winner
    if (computer_choice == user_choice) {
        printf("It's a tie!\n");
    } else if ((computer_choice == 0 && user_choice == 2) ||
               (computer_choice == 1 && user_choice == 0) ||
               (computer_choice == 2 && user_choice == 1)) {
        printf("Computer wins!\n");
    } else {
        printf("You win!\n");
    }

    return 0;
}