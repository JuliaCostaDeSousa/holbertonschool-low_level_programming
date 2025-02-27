#include "main.h"

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
	num *= signe;
	if(num >= 2147483647) 
	{
		return (2147483647);
	}
	else if(num <= -2147483648) 
	{
		return (-2147483648);
	}
	else
	{
		return (num);
	}
}

