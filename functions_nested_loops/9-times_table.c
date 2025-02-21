#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - print the 9 times table starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			if (((i * j) < 10) && (j != 9))
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(32);
				_putchar(' ');
			}
			else if (((i * j) < 10) && (j == 9))
			{
				_putchar((i * j) + '0');
				_putchar('\n');
			}
			else if (((i * j) > 10) && (j != 9))
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (((i * j) > 10) && (j == 9))
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}


