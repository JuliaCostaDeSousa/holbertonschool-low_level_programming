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
	int signe_plus = 0;
	int signe_moins = 0;
	int num = 0;
	
	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] < 48 && s[index] > 57)
		{
			if (s[index] == '+')
			{
				signe_plus++;
			}
			else if (s[index] == '-')
			{
				signe_moins++;
			}
		}
		else
		{
			while (s[index] >= 48 && s[index] <= 57)
			{
				num = num * 10 + (s[index] - 48);
				index++;
			}
			break;
		}
		break;
	}	

	if (signe_plus >= signe_moins)
	{
		return (num);
	}
	else
	{
		return (num * (-1));
	}
}

