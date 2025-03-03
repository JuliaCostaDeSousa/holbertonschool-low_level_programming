#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: matrix
 * @size: size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int diag_1 = 0;
	int diag_2 = 0;

	for (; x < size; x++)
	{
		diag_1 += a[x * (size + 1)];
		diag_2 += a[(x + 1) * (size - 1)];
	}
	printf("%d, %d\n", diag_1, diag_2);
}
