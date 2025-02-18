#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all single digit numbers with space and comma
 * Description: print all single digit numbers with space and comma
 * Return: 0 if succeded
 */
int main(void)
{
	int nombre = 48;
	int indice = 0;

	while (indice < 11)
	{
		putchar(nombre);
		nombre++;
		indice++;
		if (indice == 10)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
return (0);
}

