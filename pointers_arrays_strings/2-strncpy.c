#include "main.h"

/**
 * _strncpy - copies the string pointed to by src to dest with n element
 * Description: cf au dessus
 * @dest: destination
 * @src: source
 * @n: int
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int len_src = 0;

	while (*src != '\0')
	{
		len_src++;
		src++;
	}
	while (src[index] != '\0' && index < n && n < len_src)
	{
		*(dest + index) = src[index];
		index++;
	}
	*(dest + index) = '\0';
	
	return (dest);
}
