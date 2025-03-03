#include "main.h"

/**
 * print_triangle - prints a triangle
 * Description: prints a triangle
 * @size: int, size of the triangle
 */

void print_triangle(int size)
{
	if (size >= 2)
	{
		int increment = 0;

		while (increment < size)
		{
			int i = 0;

			for (i = 2; i <= (size - increment); i++)
			{
				_putchar(' ');
			}
			for (i = (size - increment); i <= size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
			increment++;
		}
	}
	else if (size == 1)
	{
		_putchar(35);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
