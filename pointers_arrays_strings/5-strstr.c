#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int len_needle = 0;
	int len_haystack = 0;
	int index_haystack = 0;
	int new_indice;
	char *ptr = haystack;

	for (; *(needle + len_needle) != '\0'; len_needle++)
	{
	}

	for (; *(haystack + len_haystack) != '\0'; len_haystack++)
	{
	}

	while (index_haystack <= (len_haystack - len_needle))
	{
		int index_needle = 0;
		int check = 0;

		for (; index_needle < len_needle; index_needle++)
		{
			new_indice = index_haystack + index_needle;

			if (*(haystack + new_indice) == *(needle + index_needle))
			{
				check++;
			}
		}
		if (check == len_needle)
		{
			haystack = ptr;
			return (haystack);
		}
		else
		{
			index_haystack++;
			ptr++;
		}
	}
	return (NULL);
}
