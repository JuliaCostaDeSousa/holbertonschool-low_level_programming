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
	char *tmp_dest = dest;

	while ((*dest != '\0'))
	{
	dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest++ = '\0';
	dest = tmp_dest;
	return (dest);
}
