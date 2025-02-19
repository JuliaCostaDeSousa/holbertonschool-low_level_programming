#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - write the alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	int lettre = 97;

	while (lettre < 123)
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
}
