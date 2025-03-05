#include "main.h"

int check_multiple(int n, int a)
{
	if (a < n)
	{
		if ((n % a) == 0)
		{
			return (-1);
		}
		else
		{
			return (check_multiple(n, a + 1));
		}
	}
	else
	{
		return (1);
	}
	return (0);
}

/**
 * is_prime_number - check if number is prime number
 *
 * @n: number
 * Return: 1 if is prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		int mult;

		mult = check_multiple(n, 2);
		
		if (mult < 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
