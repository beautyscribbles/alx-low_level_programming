#include "main.h"


/**
 *  * print_chessboard - prints the chessboard
 *   * @a: the 2D array representing the chessboard
 *    *
 *     * Return: void
*/
void print_chessboard(char (*a)[8]);

/**
 *  * main - check the print_chessboard function
 *   *
 *    * Return: Always 0.
*/
int main(void)
{
char board[8][8] = {
{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
};
print_chessboard(board);
return (0);
}

/**
 *  * print_chessboard - prints the chessboard
 *   * @a: the 2D array representing the chessboard
 *    *
 *     * Return: void
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
}
putchar(a[i][j]);
}
putchar('\n');
}
}
