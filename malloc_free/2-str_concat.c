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
unsigned int size = 0;

	if (strlen(s1) == 0 && strlen(s2) == 0)
	{
		printf("s1 and s2 are empty");
		return (NULL);
	}
	else if (strlen(s1) == 0 && strlen(s2) != 0)
	{
		printf("s1 is empty");
		printf("s2 = %s\n", s2);
		size = strlen(s2) + 1;
		printf("size = %u\n", size);
		s3 = malloc(size);
			if (s3 == NULL)
			{
				printf("fail to allocate memory\n");
				return (NULL);
			}
			while (index <= size)
			{
				*(s3 + index) = *(s2 + index);
				index++;
			}
	}
	else if (strlen(s2) == 0 && strlen(s1) != 0)
	{
		printf("s2 is empty");
		printf("s1 = %s\n", s1);
		size = strlen(s1) + 1;
		printf("size = %u\n", size);
		s3 = malloc(size);
		if (s3 == NULL)
			{
				printf("fail to allocate memory\n");
				return (NULL);
			}
			while (index <= size)
			{
				*(s3 + index) = *(s1 + index);
				index++;
			}
	}
	else
	{
		size = strlen(s1) + strlen(s2) + 1;
		printf("size s1 = %lu\n", strlen(s1));
		printf("size s2 = %lu\n", strlen(s2));
		printf("total size = %u\n", size);
		s3 = malloc(sizeof(char) * size);
			if (s3 == NULL)
			{
				printf("fail to allocate memory\n");
				return (NULL);
			}
			while (index <= strlen(s1) -1)
			{				
				printf("s1\n");
				printf("index s1 et s3 = %u\n", index);
				*(s3 + index) = *(s1 + index);
				printf("s3 = %s\n", s3);
				index++;
			}
			while (index < size)
			{
				printf("s2\n");
				printf("index s3 = %u\n", index);
				printf("index s2 = %lu\n", size - strlen(s1) - 1);
				*(s3 + index) = *(s2 + (size - strlen(s1) - 1));
				printf("s3 = %s\n", s3);
				index++;
			}

	}
	printf("s3 = %s\n", s3);
return (s3);
}