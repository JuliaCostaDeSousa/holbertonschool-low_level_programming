#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabet in reverse
 * Description: print the alphabet in reverse
 * Return: 0 if succeded
 */
int main(void)
{
	char lettre = 'z';
	int indice = 1;

	while (indice < 27)
	{
		putchar(lettre);
		lettre--;
		indice++;
	}
	putchar('\n');
return (0);
}

