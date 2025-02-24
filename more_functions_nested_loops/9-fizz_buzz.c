#include "main.h"

/**
 * main - Fizz-Buzz
 * Description: check the code
 * Return: always 0
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0 && (num % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((num % 3) != 0 && (num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
		num++;
	}
	return (0);
}
