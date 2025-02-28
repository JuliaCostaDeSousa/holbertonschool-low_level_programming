#include "main.h"

/**
 * _strcat - concatenates two strings
 * Description: concatenates two strings
 * @dest: first
 * @src: dest
 * @n: int
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
        char *tmp_dest = dest;
	int index = 0;

        while (*dest != '\0')
        {
        	dest++;
        }
        while (*src != '\0' && index < n)
        {
                *dest = *src;
                dest++;
                src++;
		index++;
        }
        *dest++ = '\0';
        dest = tmp_dest;
        return (dest);
}
