#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * Descritpion: draw a straight line in the terminal
 * @n: int, number of time _ is printed
 */

void print_line(int n)
{
	int increment = 0;

	if (n > 0)
	{
		while ( increment < n)
		{
			_putchar('_');
			increment++;
		}
	}
	_putchar('\n');
}
