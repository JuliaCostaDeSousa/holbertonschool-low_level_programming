#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Description: changes all lowercase letters of a string to uppercase
 * @str: pointer to the input string
 * Return: string uppercase
 */

char *string_toupper(char *str)
{
	int index = 0;
	char *ptr = str;

	for (; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			*(str + index) = *(str + index) - 32;
		}
	}
	str = ptr;
	return (ptr);
}
