#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print sums of input
 * @separator: limiter
 * @n: number of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lstotal;
	unsigned int a;

	if (n > 0)
	{
		va_start(lstotal, n);
		for (a = 1; a <= n; a++)
		{
			printf("%d", va_arg(lstotal, int));
			if (a != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(lstotal);
	}
	printf("\n");
}
