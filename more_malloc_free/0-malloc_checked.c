#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of allocated memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = NULL;

	ptr = malloc((size_t)b);
	if (ptr == NULL)
	exit(98);

	return (ptr);
}
