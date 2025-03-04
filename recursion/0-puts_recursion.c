#include "main.h"

/**
 * _puts_recursion - prints a string follow by a newline
 *
 * @s: string
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		char *ptr = s;

		_putchar(*ptr);
		ptr++;
		s = ptr;
		_puts_recursion(s);
	}
	else
	{
		printf("\n");
	}
}
