#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * Description: reverses the content of an array of integers
 * @a: array
 * @n: int, number of element of an array
 */

void reverse_array(int *a, int n)
{
	int index = 0;

	if (n >= 2)
	{
		for (; index < n / 2; index++)
		{
			int *debut = &a[index];
			int *fin = &a[((n - 1) - index)];
			int temp = *debut;

			temp = *debut;
			*debut = *fin;
			*fin = temp;
		}
	}
}
