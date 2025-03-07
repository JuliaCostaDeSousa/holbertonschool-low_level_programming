#include "main.h"
#include <ctype.h>
#include <math.h>

/**
 * main - check the code
 * @argc: nb of argument
 * @argv: value og argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	int arg_nb = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (; arg_nb < argc; arg_nb++)
		{
			char *arg_val = argv[arg_nb];
			int index = 0;

			while (*(arg_val + index) != '\0')
			{
				if (*(arg_val + index) < 48 || *(arg_val + index) > 57)
				{
					printf("Error\n");
					return (1);
				}
				index++;
			}
			sum += atoi(argv[arg_nb]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
