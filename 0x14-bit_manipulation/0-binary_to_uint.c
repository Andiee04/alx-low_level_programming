#include "main.h"

/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: binary number as a string
 * Return: unsigned int form of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (!b)
		return (0);

	for (n = 0; *b; b++)
	{
		if (*b == '1')
			n = (n << 1) | 1;
		else if (*b == '0')
			n <<= 1;
		else
			return (0);
	}
	return (n);
}
