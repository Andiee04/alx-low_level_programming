#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints available strings
 * @seperator: seperator.
 * @n: number of strings to be printed
 * Return: void
 */
 
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list pointer;
	unsigned int a;
	char *strarg;

	va_start(pointer, n);
	for (a = 0; a < n; a++)
	{
		strarg = va_arg(pointer, char *);
		if (strarg == NULL)
			printf("(nil)");
		else
			printf("%s", strarg);

		if (a < n - 1 && seperator)
			printf("%s", seperator);


	}
	va_end(pointer);
	printf("\n");
}
