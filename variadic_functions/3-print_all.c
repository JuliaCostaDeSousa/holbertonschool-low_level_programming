#include "variadic_functions.h"
/**
 *
 *
 */

int compare_strings(char *s1, char *s2)
{
	int count = 0;
	int len_s1 = 0, len_s2 = 0;

	for 




}




/**
  * _strlen - returns the length of a string
  * Description: returns the length of a string
  * @s: string
  * Return: length of a string
  */
int _strlen(char *s)
{
	int index = 0;

	while ((*(s + index) != '\0'))
	{
		index++;
	}
	return (index);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int index_format = 0;
	char *format_ref;
	int len_format_ref = 0, len_format_passed = 0, count = 0;

	format_ref = "cifs";
	len_format_ref = _strlen(format_ref);

	while (

	va_start(ap, len();


}
