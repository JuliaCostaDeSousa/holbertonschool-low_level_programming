#include "main.h"

/**
 * main - check the code
 * @argc: nb of argument
 * @argv: value og argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("%s\n", argv[0]);
		argc++;
	}
	return (0);
}
