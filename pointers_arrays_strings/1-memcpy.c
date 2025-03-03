#include "main.h"

/**
 * _memcpy - copies memory area
 * Description: copies memory area
 * @dest: dest
 * @src: src
 * @n: unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;
	char *ptr = dest;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	dest = ptr;
	return (dest);
}
