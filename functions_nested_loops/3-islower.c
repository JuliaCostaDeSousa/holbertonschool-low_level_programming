#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: int
 *Return: 1 if c lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
