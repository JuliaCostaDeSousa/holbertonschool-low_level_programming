#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

/*
 * on parcourt la string en faisant appel a _print_rev_recursion
 * jusqu'a ce que'on arrive au NULL byte. PUIS on ressort petit
 * a petit de toutes les fonctions _print_rev_recursion (donc
 * en partant de la fin de la string vers le debut) en printant
 * les characters. Donc on affiche la string a l'envers
 */
