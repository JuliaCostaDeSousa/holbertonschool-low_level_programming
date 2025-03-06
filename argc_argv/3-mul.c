#include "main.h"

/**
 * main - check the code
 * @argc: nb of argument
 * @argv: value og argument
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		int nb1 = atoi(argv[1]);
		int nb2 = atoi(argv[2]);

		printf("%d\n", nb1 * nb2);
	}
	return (0);
}
