#include "main.h"

/**
 * _strcat - concatenates two strings
 * Description: concatenates two strings
 * @dest: first
 * @src: dest
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int index = 0;
	char *new_ptr = &src[0];

	while (dest[index] != '\0')
	{
		len_dest++;
	}
	len_dest--;

	new_ptr = &src[(len_dest)];

	index = 0;

	while (src[index] != '\0')
	{
	*(new_ptr + index) = src[index];
	index++;
	}

	*(new_ptr + index) = '\0';
return (dest);
}
