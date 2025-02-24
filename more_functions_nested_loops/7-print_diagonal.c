#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: int, number of time the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n >= 2)
	{
		int increment = 0;

		while (increment < n)
		{
			int i = 0;

			for (i = 0; i < increment; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			increment++;
		}
	}
	else if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
