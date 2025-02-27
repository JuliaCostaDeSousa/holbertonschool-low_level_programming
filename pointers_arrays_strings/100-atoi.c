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

	while (s[index])
	{
		if (s[index] == '-')
		{
			signe *= -1;
		}
		while (s[index] >= 48 && s[index] <= 57)
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
	if (num < 0) 
	{
        	if (signe < 0)
            	{
			return -2147483648;
		}
	 	else
		{
			return 2147483647;
		}
	}
	num *= signe;
return (num);
}

