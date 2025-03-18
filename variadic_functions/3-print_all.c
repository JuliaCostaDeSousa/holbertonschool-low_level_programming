#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int index_format = 0;
	int index_arg = 0;

	while (*(format + index) != '\0')
	{
		switch (*(format + index)) {
			case "%c":
				printf("%c, 
	}
}
