#include "main.h"

/**
 * leet - encodes a string into 1337
 * Description: encodes a string into 1337
 * @s: string
 * Return: pointer
 */

char *leet(char *s)
{
	char arr[10] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char val[5] = {52, 51, 48, 55, 49};
	char *p = s;
	int index_s;
	int index_arr;
	int index_val;

	for (index_s = 0; *(s + index_s) != '\0'; index_s++)
	{
		index_val = 0;
		for (index_arr = 0; index_arr < 10; index_arr += 2)
		{
			if (s[index_s] == arr[index_arr] || s[index_s] == arr[index_arr + 1])
			{
				*(s + index_s) = val[index_val];
			}
			index_val++;
		}
	}
	s = p;
	return (s);
}
