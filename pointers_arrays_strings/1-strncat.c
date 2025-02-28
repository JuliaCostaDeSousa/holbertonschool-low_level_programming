#include "main.h"

/**
 * _strncat - concatenates two strings with n elements
 * Description: concatenates two strings with n elements
 * @dest: first
 * @src: dest
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp_dest = dest;
	int index = 0;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0' && index < n)
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	*dest++ = '\0';
	dest = tmp_dest;
	return (dest);
}
