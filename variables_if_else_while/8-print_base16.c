#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all numbers of base 16
 * Description: print all numbers of base 16
 * Return: 0 if succeded
 */
int main(void)
{
	char nombre = 48;
	char lettre = 97;

	while (nombre < 58)
	{
		putchar(nombre);
		nombre++;
	}
	while (lettre < 103)
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');
return (0);
}

