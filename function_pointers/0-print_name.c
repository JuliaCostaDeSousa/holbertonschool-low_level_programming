#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to call to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr_f)(char *);

	if (name == NULL)
	name = "";

	ptr_f = f;
	if (ptr_f == NULL)
	return;
	ptr_f(name);
}
