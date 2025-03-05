#include "main.h"

/**
 * main - check the code
 * @argc: nb of argument
 * @argv: value og argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		argv++;
		count++;
	}
	count--;
	printf("%d\n", count);
	return (0);
}
