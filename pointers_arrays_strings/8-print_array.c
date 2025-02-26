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
	
	for (index = 0; index <= (n - 1); index++)
	{
		if (index < (n - 1))
			{
				printf("%d, ", a[index]);
			}
		else
		{
			printf("%d", a[index]);
		}
	}
	printf("\n");

/*	else if (n < 0)
	{
		printf("%d\n", a[sizeof(*a)]);
	}
	*/
}
