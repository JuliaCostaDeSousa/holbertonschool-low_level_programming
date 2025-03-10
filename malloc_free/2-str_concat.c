#include "main.h"

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

	if ((s1 == NULL || strlen(s1) == 0) && (s2 == NULL || strlen(s2) == 0))
	return (NULL);
	else if ((s1 == NULL || strlen(s1) == 0) && strlen(s2) != 0)
	{
		s3 = malloc(strlen(s2) + 1);
			if (s3 == NULL)
			return (NULL);
			for (; index < strlen(s2) + 1; index++)
			*(s3 + index) = *(s2 + index);
	}
	else if ((s2 == NULL || strlen(s2) == 0) && strlen(s1) != 0)
	{
		s3 = malloc(strlen(s1) + 1);
			if (s3 == NULL)
			return (NULL);
			for (; index < strlen(s1) + 1; index++)
			*(s3 + index) = *(s1 + index);
	}
	else
	{
		s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
			if (s3 == NULL)
			return (NULL);
			for (; index < strlen(s1); index++)
			*(s3 + index) = *(s1 + index);
			for (; index < (strlen(s1) + strlen(s2) + 1); index++)
			*(s3 + index) = *(s2 + (index - strlen(s1)));
	}
return (s3);
}