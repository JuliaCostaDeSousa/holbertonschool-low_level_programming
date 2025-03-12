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
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1 to be appended
 * @s2: string to append
 * @n: nb of element of s2 to append to s1
 * Return: pointer to new allocated space with s2 appended to s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3 = NULL;
unsigned int index = 0;
unsigned int len_s1;
unsigned int len_s2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

len_s1 = _strlen(s1);
if (n >= _strlen(s2))
len_s2 = _strlen(s2);
else
len_s2 = n;

s3 = malloc(len_s1 + len_s2 + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (; index < len_s1; index++)
	{
		*(s3 + index) = *(s1 + index);
	}
	for (; index < (len_s1 + len_s2); index++)
	{
		*(s3 + index) = *(s2 + (index - len_s1));
	}
*(s3 + index) = '\0';
return (s3);
}
