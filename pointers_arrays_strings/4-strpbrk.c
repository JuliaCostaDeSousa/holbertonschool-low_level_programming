#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string
 * Return: pointer 
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr_accept_start = accept;

	while (*s != '\0')
	{
		accept = ptr_accept_start;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			else
			{
				accept++;
			}
		}
		s++;
	}
	return (NULL);
}
