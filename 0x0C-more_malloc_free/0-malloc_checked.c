#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - gives memory using malloc
 * @b: size to be allocated
 * Return: 0 if wrong
 **/

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}

	return (x);
}
