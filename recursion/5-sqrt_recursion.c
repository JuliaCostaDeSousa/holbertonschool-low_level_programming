#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 * Return: if no sqrt for n return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return(1 + (_sqrt_recursion(n) - (_sqrt_recursion(n) - _sqrt_recursion(n - 1))));
	}
	else
	{	
		return (0);
	}
}
