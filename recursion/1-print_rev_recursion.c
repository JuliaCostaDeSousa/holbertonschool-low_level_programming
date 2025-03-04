#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	char *ptr_start = &s[0];
	int len_s = 0;

	for (; *(s + len_s) != '\0'; len_s++)
	{
	}

	char *ptr_end = &s[(len_s - 1)];

	printf("ptr_start = %c", *ptr_start);	
	printf("ptr_end = %c", *ptr_end);
	
	if (ptr_end != ptr_start)
	{
		_putchar(*ptr_end);
		s = ptr_end;
		s--;
		printf("s = %s", s);
		_print_rev_recursion(s);
	}
	else
	{
		_putchar(*ptr_start);
	}
}
