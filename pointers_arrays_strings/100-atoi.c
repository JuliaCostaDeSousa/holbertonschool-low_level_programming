#include "main.h"

/**
 * _atoi - converts a string to character
 * Description: converts a string to character
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int len = 0;

	while ((*(s + len) != '\0'))
	{
		len++;
	}
	
	int index = 0;
	int signe_moins = 0;
	int signe_plus = 0;
	int num = 0;

	if (len =! 0)
	{
		for (index = 0; index <= len, index++)
		{
			if (s[index] < 48 && s[index] > 57)
			{
				if (s[index] == '+')
				{
					signe_plus ++;

				}
				else if (s[index] == '-')
				{
					signe_moins++;
				}
			}
			else
			{
				char_index_start = index;
				char_index_end = index;
				while (s[index] >= 48 && s[index] <= 57)
				{
					num = num * 10 + (str[index] - 48);
				}

				if (signe_plus >= signe_moins)
				{
					return(num));	
				}
				else
				{
					return(0-num);
				}
			}
		}
	}
}
