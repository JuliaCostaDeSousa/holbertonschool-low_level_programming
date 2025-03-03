#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int indice = 0;

	while (indice < 10)
	{
		int lettre = 97;

		while (lettre < 123)
		{
			_putchar(lettre);
			lettre++;
		}
		_putchar('\n');
		indice++;
	}
}
