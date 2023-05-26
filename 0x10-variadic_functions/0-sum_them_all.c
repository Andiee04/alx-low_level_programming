#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - the sum of all the arguements
 * @n: number of arguements
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list total;
	unsigned int a;
	int sum;

	if (n == 0)
		return (0);
	va_start(total, n);
	sum = 0;
	for (a = 0; a < n; a++)
		sum += va_arg(total, int);
	va_end(total);
	return (sum);
}
