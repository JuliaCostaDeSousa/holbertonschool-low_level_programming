#include "main.h"
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
 * _puts - prints a string followed by newline to stdout
 * Description: prints a string followed by newline to stdout
 * @str: string
 */

void _puts(char *str)
{
	int len, increment;

	len = _strlen(str);
	increment = 0;

	while (increment < len)
	{
		_putchar(*(str + increment));
		increment++;
	}
	_putchar('\n');
}
