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
 * rev_string - reverses a string
 * Description: reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int index = 0;
	int len = _strlen(s) - 1;
	char *debut;
	char *fin;
	char temp;
	
	while (index < (len/2))
	{
		*debut = &s[len - index];

		*fin = &s[index];
		index++;	
	}
}
