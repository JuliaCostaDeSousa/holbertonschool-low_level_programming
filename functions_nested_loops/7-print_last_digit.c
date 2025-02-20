#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num : int 
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
	{
		int num_abs = num * (-1);
		int last_digit = (num_abs % 10);
		return (last_digit);
	}
	else
	{
		int last_digit = (num % 10);
		return (last_digit);
	}
}
