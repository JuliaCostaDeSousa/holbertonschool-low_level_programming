#include "function_pointers.h"

/**
 * int_index - write a function that searches for an integer
 * @array: array of int to search in to find integer
 * @size: size of the array
 * @cmp: pointer to a function to be used to compare values
 * Return: index of first element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr_f)(int);
	int index = 0;

	if (size <= 0)
	return (-1);

	if (cmp == NULL)
	return (-1);

	ptr_f = cmp;

	while (index < size)
	{
		if (ptr_f(array[index]) != 0)
		return (index);
		index++;
	}
	return (-1);
}
