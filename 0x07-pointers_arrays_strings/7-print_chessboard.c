#include "holberton.h"

/**
 *print_chessboard - a function that prints the chessboard.
 *@a: array of pointer to each row to print.
 *
 *Return: None.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
	       printf("\n");
	}

}
