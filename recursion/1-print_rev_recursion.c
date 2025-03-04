#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

/*
 * on parcourt la string en faisant appel a _print_rev_recursion
 * jusqu'a ce que'on arrive au NULL byte. 
