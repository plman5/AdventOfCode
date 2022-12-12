//write a c program to play tictactoe on a board of adjustable size

#include <stdio.h>
#include <stdlib.h>

void printBoard(int side);
void turn(int side, char board[side][side], char player);
int winCheck(int side, char board[side][side], char player);
char board[100][100];
int main()
{
    int side;
    char player = 'X';
    int gameEnd = 0;

    printf("Enter the size of the board: ");
    scanf("%d", &side);

    // Allocate the board
    char board[side][side];
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            board[i][j] = '_';
        }
    }

    while (gameEnd == 0)
    {
        printBoard(side);
        turn(side, board, player);
        gameEnd = winCheck(side, board, player);

        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }
    return 0;
}

// Prints the board
void printBoard(int side)
{

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
}

// Takes a turn
void turn(int side, char board[side][side], char player)
{
    int row, col;
    printf("Player %c turn\n", player);
    printf("Enter row and col: ");
    scanf("%d %d", &row, &col);
    board[row][col] = player;
}

// Checks if there is a winner
int winCheck(int side, char board[side][side], char player)
{
    int win = 0;
    int count = 0;

    // Check Rows
    for (int i = 0; i < side; i++)
    {
        count = 0;
        for (int j = 0; j < side; j++)
        {
            if (board[i][j] == player)
                count++;
        }
        if (count == side)
        {
            printf("Player %c won!\n", player);
            win = 1;
        }
    }

    // Check Cols
    for (int i = 0; i < side; i++)
    {
        count = 0;
        for (int j = 0; j < side; j++)
        {
            if (board[j][i] == player)
                count++;
        }
        if (count == side)
        {
            printf("Player %c won!\n", player);
            win = 1;
        }
    }

    // Check Diagonals
    count = 0;
    for (int i = 0; i < side; i++)
    {
        if (board[i][i] == player)
            count++;
    }
    if (count == side)
    {
        printf("Player %c won!\n", player);
        win = 1;
    }

    count = 0;
    for (int i = 0; i < side; i++)
    {
        if (board[i][side - i - 1] == player)
            count++;
    }
    if (count == side)
    {
        printf("Player %c won!\n", player);
        win = 1;
    }

    return win;
}