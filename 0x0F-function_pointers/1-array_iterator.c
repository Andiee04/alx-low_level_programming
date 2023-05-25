#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - shows function on an array through a function ptr
 * @array: array
 * @size: size of array
 * @action: points to function that is needed to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t v;

	if (array != NULL && action != NULL)
		for (v = 0; v < size; v++)
			action(*(array + v));
}
