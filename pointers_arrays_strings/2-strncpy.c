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

	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (len_src < n )
	{
		while (src[index] != '\0' && index <= len_src)
		{
			*(dest + index) = *(src + index);
			index++;
		}
		dest[index] = '\0';
	}
	else if (len_src > n)
	{
		while (src[index] != '\0' && index < n)
		{
			*(dest + index) = *(src + index);
			index++;
		}
	}
	return (dest);
}
