#include "main.h"

/**
 * clear_bit - sets value of bit at index to 0
 * @n: the num
 * @index: the index
 * Return: 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
