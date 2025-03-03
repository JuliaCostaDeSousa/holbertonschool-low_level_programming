#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 * Desccription: prints all natural numbers from n to 98
 * @n: int, last printed number
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		if (n < 98)
		{
			while (n < 98)
			{
				printf("%d, ", n);
				n++;
			}
		}
		else if (n > 98)
		{
			while (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
		}
		printf("%d\n", n);
	}
}
