#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to character
 * Description: converts a string to character
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int index = 0;
	int signe = 1;
	int num = 0;
	int deja_vu = 0;

	while (s[index] != '\0')
	{
		if (s[index] == '-')
		{
			signe *= -1;
		}
		while (s[index] >= '0' && s[index] <= '9')
		{	
			deja_vu = 1;
			num = num * 10 + (s[index] - '0');
			index++;
		}
		if (deja_vu == 1)
		{
			break;
		}
		index++;
	}
	if((num * signe) >= INT_MAX) 
	{
		return (INT_MAX);
	}
	if((num * signe) <= INT_MIN) 
	{
		return (INT_MIN);
	}
	num *= signe;
	return (num);
}

