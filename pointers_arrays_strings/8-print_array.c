#include "main.h"

/**
 * print_array - prints n elements of an array of integer
 * Description: prints n elements of an array of integer
 * @a: array
 * @n: int
 */

void print_array(int *a, int n)
{
	int index = 0;
	
	if (n >= 3)
	{
		for (index = 0; index <= (n - 2); index++)
		{
			printf("%d, ", a[index]);
		}
		printf("%d\n", a[(n - 1)]);
	}
	else if (n == 2)
	{
		printf("%d, %d", a[(n - 1)], a[n]);
	}
	else
	{
		printf("%d\n", a[n]);
	}
}
