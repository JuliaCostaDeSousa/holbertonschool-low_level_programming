#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: int
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
