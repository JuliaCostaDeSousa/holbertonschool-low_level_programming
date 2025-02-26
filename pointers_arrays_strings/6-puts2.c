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
 * puts2 - prints every other character of a string
 * Description: prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int len = _strlen(str);
	int index = 0;

	while (index <= len)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
