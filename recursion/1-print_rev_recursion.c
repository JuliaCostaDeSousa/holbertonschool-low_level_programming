#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	char *ptr_start = s;
	
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		s--;
		_putchar(*s);
		s = ptr_start;
		s++;
		_print_rev_recursion(s);
	}
}
