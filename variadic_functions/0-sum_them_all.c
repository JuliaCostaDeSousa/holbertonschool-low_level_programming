#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: nb of parameter
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index = 0;
	int result = 0;

	if (n == 0)
	return (0);

	va_start(ap, n);
	while (index < n)
	{
		result += va_arg(ap, int);
		index++;
	}
	va_end(ap);
	return (result);
}
