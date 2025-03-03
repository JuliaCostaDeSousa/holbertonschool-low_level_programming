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
 * puts_half - prints half of a string
 * Description: prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int len = _strlen(str) - 1;
	int index = 0;

	for (index = (len / 2) + 1; index <= len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
