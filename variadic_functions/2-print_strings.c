#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index = 0;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (index < n - 1)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
		printf("(nil)");
		else
		printf("%s", s);
		if (separator != NULL)
		printf("%s", separator);
		index++;
	}
	s = va_arg(ap, char*);
	if (s == NULL)
	printf("(nil)\n");
	else
	printf("%s\n", s);
	va_end(ap);
}
