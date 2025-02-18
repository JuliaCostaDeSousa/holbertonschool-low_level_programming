#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 * Description: print all single digit numbers of base 10
 * Return: 0 if succeded
 */
int main(void)
{
	int indice = 0;

	while (indice < 10)
	{
		printf("%d", indice);
		indice++;
	}
	putchar('\n');
return (0);
}

