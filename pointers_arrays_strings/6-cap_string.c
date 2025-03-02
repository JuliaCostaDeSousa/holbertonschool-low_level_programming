#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * Description: capitalizes all words of a string
 * @str: string
 * Return: pointer
 */

char *cap_string(char *str)
{
	char sep_array[13] = {'\t', '\n', ' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	char *ptr = str;
	int index_str = 0;
	int index_arr;

	for (index_str = 0; *(str + index_str) != '\0'; index_str++)
	{
		for (index_arr = 0; index_arr <= 13; index_arr++)
		{
			if (str[index_str] == sep_array[index_arr])
			{
				if (str[index_str] == '\t')
				{
					*(str + index_str) = ' ';
				}
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
