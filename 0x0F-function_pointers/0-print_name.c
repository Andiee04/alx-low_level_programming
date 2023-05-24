#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - output a parameter
 * @name: parameter needed for print_name
 * @f: execute functions
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
