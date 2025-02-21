#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - print the 9 times table starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int timetable = (i * j);

			if (timetable < 10)
			{
				_putchar(timetable + '0');
			}
			else
			{
				_putchar(((timetable) / 10) + '0');
				_putchar(((timetable) % 10) + '0');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				if ((i * (j + 1)) < 10)
				{
					_putchar(32);
				}
			}
			j++;
		}
		i++;
	}
}
