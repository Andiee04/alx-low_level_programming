#include "main.h"

/**
 * get_endianness - return the endianness
 * Return: result
 */

int get_endianness(void)
{
	int a;
	char *count;

	a = 1;
	count = (char *)&a;
	return ((int)count[0]);
}
