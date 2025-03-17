#include "function_pointers.h"

/**
 * array_iterator - executes a function (parameter) on each element of an array
 * @array: array of int
 * @size: size of the array
 * @action: pointer to the fonction to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr_f)(int);
	unsigned long int index = 0;

	ptr_f = action;
	if (ptr_f == NULL)
	return;
	if (size == 0)
	return;

	while (index < size)
	{
		ptr_f(array[index]);
		index++;
	}
}
