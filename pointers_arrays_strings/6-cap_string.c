#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * Description: capitalizes all words of a string
 * @str: string
 * Return: pointer
 */

char *cap_string(char *str)
{
	char sep_arr[13] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	char *ptr = str;
	int index_str = 0;
	int index_arr;

	if (str[0] >= 97 && str[0] <= 122)
	{
		*str -= 32;
	}
	for (index_str = 0; *(str + index_str) != '\0'; index_str++)
	{
		for (index_arr = 0; index_arr <= 13; index_arr++)
		{
			if (str[index_str] == sep_arr[index_arr])
			{
				if (str[index_str + 1] >= 97 && str[index_str + 1] <= 122)
				{
					*(str + (index_str + 1)) -= 32;
				}
			}
		}
	}
	str = ptr;
	return (str);
}
