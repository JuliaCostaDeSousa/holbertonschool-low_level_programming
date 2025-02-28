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
 * _strcat - concatenates two strings
 * Description: concatenates two strings
 * @dest: first
 * @src: dest
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len_src = _strlen(src);
	int index = 0;
	while (src[index] != '\0')
	{
		dest[len_src + index] = src[index];
		index++;
	}
	return (dest);
}
