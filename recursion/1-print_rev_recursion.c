#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	char *str_rev = s;

	if (*str_rev != '\0')
	{ 
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar(*str_rev);
		s = str_rev;
		s++;
		_print_rev_recursion(s);
	}
}
