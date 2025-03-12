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
 * string_nconcat - concatenates two string
 *
 * @s1: string to be appended
 * @s2: string to append to s1
 * @n: number of character of s2 to append to s1
 * Return: pointer that contains the concatenation*
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = NULL;
	unsigned int index = 0;

		if ((s1 == NULL || _strlen(s1) == 0) && (s2 == NULL || _strlen(s2) == 0))
		return (NULL);
		if ((s1 == NULL || _strlen(s1) == 0) && _strlen(s2) != 0 && n != 0)
		{
			if (n < _strlen(s2))
			{
				s3 = malloc(n + 1);
			}
			else
			{
				n = _strlen(s2) + 1;
				s3 = malloc(_strlen(s2) + 1);
			}
			if (s3 == NULL)
			return (NULL);
			for (; index < n - 1; index++)
			*(s3 + index) = *(s2 + index);
		}
		else if ((s2 == NULL || _strlen(s2) == 0) && _strlen(s1) != 0)
		{
			s3 = malloc(_strlen(s1) + 1);
			if (s3 == NULL)
			return (NULL);
			for (; index < _strlen(s1); index++)
			*(s3 + index) = *(s1 + index);
		}
		else
		{
			if (n < _strlen(s2))
			{
				s3 = malloc(_strlen(s1) + n + 1);
			}
			else
			{
				n = _strlen(s2);
				s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
			}
			if (s3 == NULL)
			return (NULL);
			for (; index < _strlen(s1); index++)
			*(s3 + index) = *(s1 + index);
			for (; index < (_strlen(s1) + n); index++)
			{
				*(s3 + index) = *(s2 + (index - _strlen(s1)));
			}
		}
	index++;
	*(s3 + index) = '\0';
	return (s3);
}
