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
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of words
 */

char **strtow(char *str)
{
	int count_word = 0, len_ptr = 0;
	int index = 0, index_ptr = 0, index_str2 = 0; 
	char **ptr;
	char *str2 = NULL;
	printf("%s\n", str);

	if (str == NULL || _strlen(str) == 0)
	printf("str NULL ou lenstr = 0\n");
	return (NULL);

	while (str[index] != '\0')
	{	
		printf("index : %d\n", index);

		if (str[index] == ' ')
		index++;
		else
		{
			count_word++;
			while (str[index] != ' ')
			{
				str2[index_str2] = str[index];
				index++, index_str2++;
			}
			str2[index_str2] = '\0';
			index_str2++;
		}
	}
	printf("str : %s\n", str);
	printf("str2 : %s\n", str2);
		
	if (count_word == 0)
	printf("count_word = 0\n");
	return (NULL);
	ptr = malloc(count_word);
	if (ptr == NULL)
	printf("ptr == NULL\n");
	return (NULL);

	while (index_ptr < count_word)
	{
		len_ptr = 0;
		while (*str2 != '\0')
		{
			len_ptr++;
			str2++;
		}
		str2++;
		ptr[index_ptr] = malloc(len_ptr + 1);
		if (ptr[index_ptr] == NULL)
		{
			printf("ptr[index_ptr] == NULL\n");
			for (; index < index_ptr ; index++)
			{
				free(ptr[index]);
			}
			free(ptr);
		}

		for (index = 0; index < (len_ptr + 1); index++)
		{
			ptr[index_ptr][index] = *(str2 - (len_ptr + 1));
		}
		str2++;
	}	
	return(ptr);
}