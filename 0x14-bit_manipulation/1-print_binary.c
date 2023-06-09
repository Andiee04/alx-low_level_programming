#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @n: int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int a, bit;

	if (n == 0)
		_putchar('0');
	for (bit = 0, a = sizeof(n) * 8 - 1; a >= 0; a--)
	{
		if ((n >> a) & 1)
			bit = 1;
		if (bit == 1)
			((n >> a) & 1) ? _putchar('1') : _putchar('0');
	}
}
