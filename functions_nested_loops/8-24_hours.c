#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int heure = 0;

	while (heure < 24)
	{
		int minute = 0;

		while (minute < 60)
		{
			_putchar((heure / 10) + '0');
			_putchar(heure % 10 + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		heure++;
	}

}
