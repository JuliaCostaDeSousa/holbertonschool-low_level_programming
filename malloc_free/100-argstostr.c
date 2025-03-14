#include "main.h"
/**
  * _strlen - returns the length of a string
  * Description: returns the length of a string
  * @s: string
  * Return: length of a string
  */
unsigned int _strlen(char *s)
{
	unsigned int index = 0;

	while ((*(s + index) != '\0'))
	{
		index++;
	}
	return (index);
}
/**
 * argstostr - concatenates all arguments of the program
 * @ac: nb of args
 * @av: arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int index, arg_nb, len_arg, index_arg, total_len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (arg_nb = 0; arg_nb < ac; arg_nb++)
	{
		total_len += _strlen(av[arg_nb]);
	}
	total_len += ac;

	ptr = malloc(total_len);
	if (ptr == NULL)
	return (NULL);

	for (arg_nb = 0; arg_nb < ac; arg_nb++)
	{
		len_arg = _strlen(av[arg_nb]);
		index_arg = 0;
		while (index_arg < len_arg)
		{
			ptr[index] = av[arg_nb][index_arg];
			index_arg++;
			index++;
		}
		ptr[index] = '\n';
		index++;
	}
	index++;
	ptr[index] = '\0';
	return (ptr);
}
