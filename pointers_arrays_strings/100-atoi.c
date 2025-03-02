#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to character
 * Description: on met en abs avant de mettre le signe pour eviter l'overflow
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int index = 0;
	int signe = -1;
	int num = 0;
	int deja_vu = 0;

	while (s[index] != '\0')
	{
		if (s[index] == '-')
		{
			signe *= -1; /* on enleve le signe - */
		}
		if (s[index] >= '0' && s[index] <= '9')
		{
			deja_vu = 1;
			num = num * 10 - (s[index] - '0');
			/* on rajoute le signe - avec num * 10 - (s - 0) au lieu de faire */
			/* num * 10 + (s - 0) avec un nb qui risque l'overflow */
		}
		else if (deja_vu == 1)
		{
			break;
		}
		index++;
	}
	num *= signe;
	return (num);
}
