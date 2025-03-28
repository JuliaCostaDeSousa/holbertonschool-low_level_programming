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
unsigned int len_s1;
unsigned int len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
len_s1 = _strlen(s1);
len_s2 = _strlen(s2);

s3 = malloc(len_s1 + len_s2 + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (; index < _strlen(s1); index++)
	{
		*(s3 + index) = *(s1 + index);
	}
	for (; index < (_strlen(s1) + _strlen(s2)); index++)
	{
		*(s3 + index) = *(s2 + (index - _strlen(s1)));
	}
*(s3 + index) = '\0';
return (s3);
}
