#include "main.h"
#include <ctype.h>

int check_number(char 




/**
 * main - check the code
 * @argc: nb of argument
 * @argv: value og argument
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int index = 1;
		while (index <= argc)
		{
			printf("index = %d\n", index);
			printf("isdigit(argv[index]) = %d", isdigit(argv[index]));
			if (isdigit(atoi(argv[index])) == 0)
			{
				printf("argv[%d] = %s\n", index, argv[index]);
				printf("Error\n");
				return (1);
			}
			else
			{
				if (atoi(argv[index]) >= 0)
				{
					printf("atoi(argv[%d]) = %d\n", index, atoi(argv[index]));
					sum += atoi(argv[index]);
				}
				index++;
			}
		}
	}
	printf("sum = %d\n", sum);
	return (sum);
}
