#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14 with newline
 * Description: print 10 times numbers from 0 to 14 with newline
 */

void more_numbers(void)
{
	int increment = 0;

	while (increment < 10)
	{
		int num = 0;

		while (num < 15)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		increment++;
	}
}
