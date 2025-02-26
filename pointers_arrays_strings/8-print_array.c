#include "main.h"

/**
 * print_array - prints n elements of an array of integer
 * Description: prints n elements of an array of integer
 * @a: array
 * @n: int
 */

void print_array(int *a, int n)
{
	int index = 1;
	
	if (n >= 1)
	{
		for (index = 1; index <= (n - 1); index++)
		{
			printf("%d, ", a[index - 1]);
		}
	}
	printf("%d\n", a[n - 1]);
}
