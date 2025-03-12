#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum nb included
 * @max: maximmum nb included
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ar = NULL;
	int index = 0;
	int number = min;

	if (min > max)
	return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
	return (NULL);

	for (; index <= max; index++)
	{
		*(ar + index) = number;
	    number++;
	}
	return (ar);
}
