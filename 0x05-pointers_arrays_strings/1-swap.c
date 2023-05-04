#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: the first integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
