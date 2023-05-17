#include "main.h"
#include <stdlib.h>
/**
 * create_array -  Entry point
 *@size: unsigned int.
 *@c: char.
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x = malloc(sizeof(c) * size);
	if (size == 0 || x == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		*(x + y) = c;
	}
	return (x);
}
