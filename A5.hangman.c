#include <stdio.h>
#include <string.h>

int main() {
    char word[20], guess[20];
    int lives = 5;

    printf("Enter a word: ");
    scanf("%s", word);

    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        guess[i] = '_';
    }
    guess[len] = '\0';

    while (lives > 0) {
        printf("Guess a letter: ");
        char letter;
        scanf(" %c", &letter);

        int correctGuess = 0;
        for (int i = 0; i < len; i++) {
            if (word[i] == letter) {
                guess[i] = letter;
                correctGuess = 1;
            }
        }

        if (!correctGuess) {
            lives--;
            printf("Wrong guess. Lives remaining: %d\n", lives);
        }

        printf("Current guess: %s\n", guess);

        if (strcmp(word, guess) == 0) {
            printf("Congratulations! You win!\n");
            break;
        }
    }

    if (lives == 0) {
        printf("You lose. The word was: %s\n", word);
    }

    return 0;
}