#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * initBoard initializes the 3x3 board array to space characters representing unmarked positions
 * @param board
 */
void initBoard(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';

        }

    }

}

/**
 * displayBoard displays the tic-tac-toe board with vertical and
 * horizontal grid lines formed with dashes and vertical bars, using the characters in the 3x3 board array
 * @param board
 */
void displayBoard(char board[3][3]) {
    printf("-------------");
    for (int i = 0; i < 3; ++i) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------");

    }

}

/**
 * markTheBoard marks the board based on the position (1-9) and marker character passed in
 * @param board
 * @param mark
 * @param position
 * @return
 */
void markTheBoard(char board[3][3], char mark, int position) {
    int row = (position - 1) % 3;
    int column = position - row * 3 - 1;
    board[row][column] = mark;

}

/**
 * hasWon
 * @param board
 * @param mark
 * @return true if the marker character of the player passed in as won the game by examining
 * the values in the 3x3 board array
 */
bool hasWon(char board[3][3], char mark) {
    for (int i = 0; i < 3; ++i) {
        // horizontal
        if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark) {
            return true;

        }
        // vertical
        if (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark) {
            return true;

        }

    }
    // diagonal left-top to right-bottom
    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark) {
        return true;

    }
    // diagonal right-top to left-bottom
    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark) {
        return true;

    }
    return false;


}

/**
 * isTie Tells if the board is currently a tie
 * @param board
 * @return true if the board is currently a tie
 */
bool isTie(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;

            }
        }
    }
    if (hasWon(board, 'X') || hasWon(board, 'O')) {
        return false;

    } else {
        return true;

    }


}

/**
 * Main program for an interactive game of tic-tac-toe.
 */
int main(void) {
    char board[3][3];
    char turn = 'X';

    // initialize the board
    initBoard(board);

    printf("To play a position use the following map to enter a position.\n");
    printf("-------------\n");
    for (int boardPos = 1; boardPos <= 9; boardPos += 3) {
        printf("| %d | %d | %d |\n", boardPos, boardPos + 1, boardPos + 2);
        printf("-------------\n");
    }

    // play until there is a draw or a player has won
    while (!isTie(board) && !hasWon(board, 'X') && !hasWon(board, 'O')) {
        int boardPos = -1;
        bool validInput = false;

        // wait for valid input
        while (!validInput) {
            printf("Player %c, enter the position you want to play.\n", turn);
            int success = scanf("%d", &boardPos);
            if (success < 0 || boardPos < 0 || boardPos > 9 ||
                board[(boardPos - 1) / 3][(boardPos - 1) % 3] != ' ') {
                continue;
            }
            validInput = true;
        }

        // mark the position and display the updated board
        markTheBoard(board, turn, boardPos);

        // display the current board
        displayBoard(board);

        // other player's turn
        switch (turn) {
            case 'X':
                turn = 'O';
                break;
            case 'O':
                turn = 'X';
                break;
        }
    }
    // game over so report results
    // this order is not the most efficient
    if (isTie(board)) {
        printf("The game ends in a tie.\n");
    } else if (hasWon(board, 'X')) {
        printf("Player X has won.");
    } else {
        printf("Player O has won.");
    }
}














