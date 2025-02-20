#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @int: value to compute
 * Return: computes absolute value of an integer
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	else
	{
		return (c);
	}
}
