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
 * print_rev - prints a string in reverse
 * Description: prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len, increment;

	len = _strlen(s);
	increment = 1;

	while (increment <= len)
	{
		_putchar(*(s + (len - increment)));
		increment++;
	}
	_putchar('\n');
}
