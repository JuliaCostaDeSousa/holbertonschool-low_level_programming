#include "main.h"

/**
 * main - check the code
 * @argc: nb of argument
 * @argv: value og argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", *argv++);
		index++;
	}
	return (0);

}
