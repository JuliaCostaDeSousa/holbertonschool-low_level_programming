#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;
	char *op;

	if (argc != 4)
	{	
		printf("Error\n");
		exit (98);
	}
	op = argv[2];
	if (strcmp(op, "+") != 0 && strcmp(op, "-") != 0 && strcmp(op, "*") != 0 &&
    strcmp(op, "/") != 0 && strcmp(op, "%") != 0)	
	{	
		printf("Error\n");
		exit (99);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && atoi(argv[3]) == 0)
	{	
		printf("Error\n");
		exit (100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (0);
}
