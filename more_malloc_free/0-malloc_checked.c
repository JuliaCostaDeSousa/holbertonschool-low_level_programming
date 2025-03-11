#include "main.h"

/**
 * malloc_checked - allocates memory
 * 
 * @b: size of allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = NULL;
	
	printf("b = %u\n", b);
	printf("size_t(%u) = %lu\n", b, (size_t)b);
	/*printf("(size_t %u) * sizeof(unsigned int) = %lu\n", b, ((size_t)b * sizeof(unsigned int))); 
*/
	ptr = malloc((size_t)b);

	if (ptr == NULL)
	{
		printf("Echec de l'allocation pour b = %u octets\n", b);
		exit(98);
	}
	return (ptr);
}
