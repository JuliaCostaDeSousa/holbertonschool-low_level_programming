#include "main.h"

/**
 * odd_number - additionne les nombres impairs pour trouver la racine
 *
 * @n: nombre initial
 * @a: nombre impair
 * Return: incremente a tant que a != n, si a > n (pas de racine) return (-999)
 */

int odd_number(int n, int a)
{
	if (a < n)
	{
		return (1 + odd_number(n - a, a + 2));
	}
	else if (a == n)
	{
		return (1);
	}
	else
	{
		return (-999);
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
	int count;

	count = odd_number(n, 1);

	if (count < 0)
	{
		return (-1);
	}
	else
	{
		return (count);
	}
}
