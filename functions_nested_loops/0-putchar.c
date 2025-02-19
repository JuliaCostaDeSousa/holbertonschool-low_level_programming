#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar
 * Description: print _putchar
 * Return: 0 if succeded
 */

int main(void)
{
	char arr[8] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r' };
	unsigned long int indice = 0;

	while (indice < sizeof(arr))
	{
		_putchar(arr[indice]);
		indice++;
	}

	return (0);
}
