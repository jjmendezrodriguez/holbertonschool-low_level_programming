#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print the chessboard
 *
 * @a: - matrix
 *
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, col = 0;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c", a[row][col]);
		}
		printf("\n");
	}
}
