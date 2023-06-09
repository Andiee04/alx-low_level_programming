#include "main.h"

/**
 * set_bit - sets bit to 1 at an index
 * @n: numb
 * @index: index
 * Return: 1 if success, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
