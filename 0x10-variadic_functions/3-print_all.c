#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints char input
 * @valist: valist
 */

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints int input
 * @valist: valist
 */

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints float value
 * @valist: valist
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints string value
 * @valist: valist
 */

void print_string(va_list valist)
{
	char *a;

	a = va_arg(valist, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}

/**
 * print_all - print diffrent value of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	char *sep = "";
	char *sep2 = ", ";
	int a, b;
	va_list lsArg;

	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(lsArg, format);
	a = 0;
	while (format != NULL && format[a])
	{
		b = 0;
		while (ops[b].f != NULL)
		{
			if (format[a] == *(ops[b].c))
			{
				printf("%s", sep);
				ops[b].f(lsArg);
			}
			b++;
		}
		sep = sep2;
		a++;
	}
	printf("\n");
	va_end(lsArg);
}
