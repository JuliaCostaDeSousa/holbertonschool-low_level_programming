#include "main.h"

/**
  * _strlen - returns the length of a string
  * Description: returns the length of a string
  * @s: string
  * Return: length of a string
  */

int _strlen(char *s)
{
	int index = 0;

	while ((*(s + index) != '\0'))
	{
		index++;
	}
	return (index);
}

/**
 * rev_string - reverses a string
 * Description: reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char *s2 = s;
	char *s3 = s;
	int increment;
       	int len = _strlen(s);

	increment = 0;
	while (increment <= len)
	{
		s2[increment] = s[increment];
		increment++;
	}
	increment = 0;
	while (increment <= len)
	{
		*(s2 + (len - increment)) = *(s3 + increment);
		increment++;
	}
	*s = *s3;
	printf("%s\n", s);
	printf("%s\n", s2);
}
