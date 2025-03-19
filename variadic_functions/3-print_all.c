#include "variadic_functions.h"
/**
 * check_case_exist - check if case exist and print separator
 * @check: check
 * @format: format
 * @index: index
 */
void check_case_exist(int check, const char * const format, int index)
{
	switch (check)
	{
		case 1:
			switch (*(format + index + 1))
			{
				case '\0':
					printf("\n");
					break;
				default:
					printf(", ");
			}
			break;
	}
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int index = 0, check = 1;
	char *string;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(ap, format);
	while (*(format + index) != '\0')
	{
		check = 0;
		switch (*(format + index))
		{
			case 'c':
				check = 1;
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				check = 1;
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				check = 1;
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				check = 1;
				string = va_arg(ap, char*);
				if (string == NULL)
				string = "(nil)";
				printf("%s", string);
				break;
		}
		check_case_exist(check, format, index);
		index++;
	}
	va_end(ap);
}
