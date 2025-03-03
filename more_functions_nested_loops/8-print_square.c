#include "main.h"

/**
 * print_square - prints a square with newline
 * Description: prints a square with newline
 * @size: size of the square
 */

void print_square(int size)
{
	if (size >= 1)
	{
		int increment = 0;

		while (increment < size)
		{
			int i = 0;

			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			increment++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
