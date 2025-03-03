#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to first occurence of character in string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			char *ptr = s;

			return (ptr);
		}
		s++;
	}
	s++;
	return (NULL);
}
