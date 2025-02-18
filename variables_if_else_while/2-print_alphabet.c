#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabet
 * Description: print the alphabet
 * Return: 0 if succeded
 */
int main(void)
{
	char lettre = 'a';
	int indice = 1;
	while (indice < 27)
	{
		putchar(lettre);
		lettre++;
		indice++;
	}
	putchar('\n');
return (0);
}

