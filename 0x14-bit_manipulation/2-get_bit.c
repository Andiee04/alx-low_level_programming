#include "main.h"

/**
 * get_bit - gets the vallue of a bit at an index
 * @n: number
 * @index: index
 * Return: value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (n >> index & 1);
}
