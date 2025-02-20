#include <stdlib.h>
#include <stdio.h>
#include "6-abs.c"
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num : int
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	_putchar(_abs(num % 10) + '0');
	return (_abs(num % 10));
}
