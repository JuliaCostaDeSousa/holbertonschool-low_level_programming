#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	char *ptr_start = s;
	char *last = s;

	if (*s != '\0')
	{
		s++;
		_putchar(*s);
		_print_rev_recursion(s);
	}
	else
	{
		s--;
		/*printf("s == 0 : %s\n", s);*/

		*last = *s;

		_putchar(*s);
		s = ptr_start;
		s++;

		printf("s : %s\n", s);
		_print_rev_recursion(s);
	}
}
