#include "main.h"

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

		if ((s1 == NULL || strlen(s1) == 0) && (s2 == NULL || strlen(s2) == 0))
		return (NULL);
		if ((s1 == NULL || strlen(s1) == 0) && strlen(s2) != 0 && n != 0)
		{
			if (n < strlen(s2))
			{
				s3 = malloc(n + 1);
			}
			else
			{
				n = strlen(s2) + 1;
				s3 = malloc(strlen(s2) + 1);
			}
			if (s3 == NULL)
			return (NULL);
			for (; index < n - 1; index++)
			*(s3 + index) = *(s2 + index);
		}
		else if ((s2 == NULL || strlen(s2) == 0) && strlen(s1) != 0)
		{
			s3 = malloc(strlen(s1) + 1);
			if (s3 == NULL)
			return (NULL);
			for (; index < strlen(s1); index++)
			*(s3 + index) = *(s1 + index);
		}
		else
		{
			if (n < strlen(s2))
			{
				s3 = malloc(strlen(s1) + n + 1);
			}
			else
			{
				n = strlen(s2);
				s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
			}
			if (s3 == NULL)
			return (NULL);
			for (; index < strlen(s1); index++)
			*(s3 + index) = *(s1 + index);
			for (; index < (strlen(s1) + n); index++)
			{
				*(s3 + index) = *(s2 + (index - strlen(s1)));
			}
		}
	index++;
	*(s3 + index) = '\0';
	return (s3);
}
