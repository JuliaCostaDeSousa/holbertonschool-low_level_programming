#include "main.h"

/**
	* _strdup - duplicate string in new allocated space
	* Description: duplicate string in new allocated space
	* @str: string to duplicate
	* Return: a pointer to newly allocated space in memory for duplicated string
	*/

char *_strdup(char *str)
{
char *str_copy = NULL;
unsigned int index = 0;

	if (strlen(str) == 0)
	{
		printf("str = 0\n");
		return (NULL);
	}
str_copy = malloc(strlen(str) + 1);
	if (str_copy == NULL)
	{
		printf("fail to allocate memory\n");
		return (NULL);
	}
	while (index <= strlen(str) + 1)
	{
		*(str_copy + index) = *(str + index);
		index++;
	}
return (str_copy);
}
