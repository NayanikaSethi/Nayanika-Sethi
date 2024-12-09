#include <stdio.h>

#define ROW 3
#define COL 3

// Function to print the Tic-Tac-Toe board
void printBoard(char board[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if a player has won
int checkWin(char board[ROW][COL], char player) {
    // Check rows
    for (int i = 0; i < ROW; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
    }

    // Check columns
    for (int j = 0; j < COL; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return 1;
        }
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;
    }

    return 0;
}

// Function to check for a draw
int checkDraw(char board[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    char board[ROW][COL] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char player = 'X';

    int row, col;

    while (1) {
        printBoard(board);

        printf("Player %c's turn (row, col): ", player);
        scanf("%d %d", &row, &col);

        if (row < 0 || row >= ROW || col < 0 || col >= COL || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[row][col] = player;

        if (checkWin(board, player)) {
            printBoard(board);
            printf("Player %c wins!\n", player);
            break;
        }

        if (checkDraw(board)) {
            printBoard(board);
            printf("Draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}