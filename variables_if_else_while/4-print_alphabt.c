#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the alphabet without q and e
 * Description: print the alphabet without q and e
 * Return: 0 if succeded
 */
int main(void)
{
	char lettre = 'a';
	int indice = 1;

	while (indice < 27)
	{
	if (lettre == 'q' || lettre == 'e')
	{
		lettre++;
		indice++;
	}
	else
	{
		putchar(lettre);
		lettre++;
		indice++;
	}
	}
	putchar('\n');
return (0);
}

