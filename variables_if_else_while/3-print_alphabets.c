#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabet in min and maj
 * Description: print the alphabet in min and maj
 * Return: 0 if succeded
 */
int main(void)
{
	char lettremin = 'a';
	char lettremaj = 'A';
	int indice = 1;

	while (indice < 53)
	{
		if (indice < 27)
		{
			putchar(lettremin);
			lettremin++;
			indice++;
		}
		else
		{
			putchar(lettremaj);
			lettremaj++;
			indice++;
		}
	}
	putchar('\n');
return (0);
}
