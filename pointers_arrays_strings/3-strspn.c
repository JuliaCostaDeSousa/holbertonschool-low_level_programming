#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * Description: gets the length of a prefix substring
 * @s: string
 * @accept: subtring
 * Return: nb of bytes in s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int val = 0;
	char *ptr_accept = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				val++;
				accept = ptr_accept;
				break;
			}
			else
			{
				accept++;
			}

		}
		if (val == 0)
		{
			break;
		}
		else
		{
			s++;
		}
	}
	return (val);
}
