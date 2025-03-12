#include "main.h"
/**
  * _strlen - returns the length of a string
  * Description: returns the length of a string
  * @s: string
  * Return: length of a string
  */
unsigned int _strlen(char *s)
{
	unsigned int index = 0;

	while ((*(s + index) != '\0'))
	{
		index++;
	}
	return (index);
}
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

	if (_strlen(str) == 0)
	{
		return (NULL);
	}
str_copy = malloc(_strlen(str) + 1);
	if (str_copy == NULL)
	{
		return (NULL);
	}
	while (index <= _strlen(str))
	{
		*(str_copy + index) = *(str + index);
		index++;
	}
	*(str_copy + index + 1) = '\0';
return (str_copy);
}
