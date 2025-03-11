#include "main.h"
#include <stdint.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: nb of element
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int index = 0;
	
	if (nmemb == 0 || size == 0)
        {
		return (NULL);
        }

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (; index < (nmemb * size); index++)
	{
		{
			*(ptr + index) = 0;
		}
	}
	return (ptr);
}
