#include "main.h"

int odd_number (int n, int a)
{	
	if ((n - a) == 0)
	{
		return (a, );
	}
	else
	{
		return(odd_number(a + 2);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 * Return: if no sqrt for n return -1
 */

int _sqrt_recursion(int n)
{
	if ((n - odd_number(n, 1)) < 0)
	{
		return (-1);
	}
	else if ((n - odd_number(n, 1)) > 0)
	{

		return (1 + _sqrt_recursion(n - odd_number(n, 1));
	}
	else
	{	
		return (0);
	}
}
