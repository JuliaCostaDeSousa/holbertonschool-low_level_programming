#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 with newline
 * Description: prints numbers from 0 to 9 with newline
 */

void print_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
