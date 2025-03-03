#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to array
 */

void print_chessboard(char (*a)[8])
{
	int row = sizeof(*a) / sizeof(*a[0]);
	int column = sizeof(a[0]);
	int index_row = 0;
	int index_column = 0;

	for (; index_row < row; index_row++)
	{
		index_column = 0;
		for (; index_column < column; index_column++)
		{
			printf("%c", a[index_row][index_column]);
		}
		printf("\n");
	}
}
