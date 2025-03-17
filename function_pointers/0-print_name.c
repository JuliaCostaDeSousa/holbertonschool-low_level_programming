#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to call to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr_f)(char *);

	ptr_f = f;
	ptr_f(name);
}
