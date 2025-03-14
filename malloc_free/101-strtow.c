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
	char *ptr;

	if (str == NULL)
	return (NULL);

}