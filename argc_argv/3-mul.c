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
		printf("Error");
		return (1);
	}
	else
	{
		int nb1 = *argv[1];
		int nb2 = *argv[2];
		
		printf("nb1 = %d\n", nb1);
		printf("nb2 = %d\n", nb2);
		return (nb1 * nb2);
	}
	return (0);
}
