#include "main.h"

/**
	* create_array - creates an array of chars
	* Description: create an array of chars and initializes it with specific char
	* @size : size of array
	* @c: initialization char
	* Return: pointer to the array or NULL if it fails
	*/

char *create_array(unsigned int size, char c)
{
char *s = NULL;
unsigned int index = 0;

	if (size == 0)
	{
		printf("size = 0");
		return (NULL);
	}
s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	while (index <= (sizeof(char) * size))
	{
		*(s + index) = c;
		index++;
	}
return (s);
}
