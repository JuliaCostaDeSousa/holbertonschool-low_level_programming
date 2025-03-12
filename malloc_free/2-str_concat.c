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
 * str_concat - concatenates two strings
 *
 * @s1: string 1 to be appended
 * @s2: string to append
 * Return: pointer to new allocated space with s2 appended to s1
 */

char *str_concat(char *s1, char *s2)
{
char *s3 = NULL;
unsigned int index = 0;

	if ((s1 == NULL || _strlen(s1) == 0) && (s2 == NULL || _strlen(s2) == 0))
	return (NULL);
	if ((s1 == NULL || _strlen(s1) == 0) && _strlen(s2) != 0)
	{
		s3 = malloc(_strlen(s2) + 1);
			if (s3 == NULL)
			return (NULL);
			for (; index < _strlen(s2) + 1; index++)
			*(s3 + index) = *(s2 + index);
	}
	else if ((s2 == NULL || _strlen(s2) == 0) && _strlen(s1) != 0)
	{
		s3 = malloc(_strlen(s1) + 1);
			if (s3 == NULL)
			return (NULL);
			for (; index < _strlen(s1) + 1; index++)
			*(s3 + index) = *(s1 + index);
	}
	else
	{
		s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
			if (s3 == NULL)
			return (NULL);
			for (; index < _strlen(s1); index++)
			*(s3 + index) = *(s1 + index);
			for (; index < (_strlen(s1) + _strlen(s2) + 1); index++)
			*(s3 + index) = *(s2 + (index - _strlen(s1)));
	}
return (s3);
}
