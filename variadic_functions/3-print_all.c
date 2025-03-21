#include "variadic_functions.h"

/**
 * printf_char - prints char type
 * @ap: list of arguments
 */

void printf_char(va_list ap)
{
	printf("%c", va_arg(ap, char));
}
/**
 * printf_int - prints int type
 * @ap: list of arguments
 */
void printf_int(va_list ap)
{

	printf("%i", va_arg(ap, int));
}
/**
 * printf_float - prints float type
 * @ap: list of arguments
 */
void printf_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * printf_string - prints string type
 * @ap: list of arguments
 */
void printf_string(va_list ap)
{
	if (va_arg(ap, char*) =! NULL)
	{
		printf("(nil)")
		return;
	}
	printf("%s", va_arg(ap, char*));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int index_format = 0, index_types = 0;
	char *separator = "";
	type_t types_list[] = {
		{"c", printf_char},
		{"i", printf_int},
		{"f", printf_float},
		{"s", printf_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format != NULL && *(format + index) != '\0')
	{
		index_types = 0;
		while (types_list[index_types].type != NULL)
		{
			if (types_list[index_types].type == *(format + index))
			{
				printf("%s", separator);
				types_list[index_types].printf_function(ap);
				separator = ", ";
			}
			index_types++;
		}
		index++;
	}
	printf("\n");
	va_end(ap);
}
