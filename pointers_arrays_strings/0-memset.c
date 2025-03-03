#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * Description: fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: first n byte
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;
	char *ptr = s;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	s = ptr;
	return (s);
}
