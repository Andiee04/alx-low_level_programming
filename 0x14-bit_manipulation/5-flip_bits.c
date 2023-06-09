#include "main.h"

/**
 * flip_bits - determine how many bits to flip
 * @n: numb1
 * @m: numb2
 * Return: results
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	int Incre = 0;

	while (a)
	{
		Incre += a & 1;
		a >>= 1;
	}
	return (Incre);
}
