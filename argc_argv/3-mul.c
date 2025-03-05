#include "main.h"

/**
 * main - check the code
 * @argc: nb of argument
 * @argv: value og argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
	}
	else
	{
		int index = 1;
		int nb = 1;
		*argc++;

		while (index < argc)
		{
			nb *= argv[argc];
			*argc++;
			index++;			
		}
		printf("%d\n", nb);
	}
	return (0);
}
