#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list ap;

	va_start(ap, n);
	while (index < n - 1)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		printf("%s", separator);
		index++;
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
