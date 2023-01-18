#include "function_pointers.h"

/**
 * print_name - this function print out a name
 * @name: the name to print
 * @f: function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
