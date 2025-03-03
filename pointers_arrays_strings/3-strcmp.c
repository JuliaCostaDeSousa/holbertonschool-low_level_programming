#include "main.h"

/**
 * _strcmp - compares two strings
 * Description: compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: int, 0 if equal, < 0 if s1 < s2, > 0 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int val = 0;
	int index = 0;

	while (*(s1 + len_s1) != '\0')
	{
		len_s1++;
	}
	while (*(s2 + len_s2) != '\0')
	{
		len_s2++;
	}

	while (index <= len_s1 && index <= len_s2 && *(s1 + index) == *(s2 + index))
	{
		index++;
	}
	val = *(s1 + index) - *(s2 + index);

	if (*(s1 + index) != *(s2 + index))
	{
		return (val);
	}
	else
	{
		return (0);
	}
}
