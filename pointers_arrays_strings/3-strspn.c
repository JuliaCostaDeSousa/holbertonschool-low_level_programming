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
	int index = 0;
	int val = 0;

	for (; *(s + index) != '\0'; index++)
	{
		int index_accept = 0;

		for (; *(accept + index_accept) != '\0'; index_accept++)
		{
			if (*(s + index) == *(accept + index_accept))
			{
				val++;
				break;
			}
		}
	}
}

