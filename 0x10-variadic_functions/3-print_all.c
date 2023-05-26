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
	int a = 0;
	char *str, *sep = "";

	va_list listAr;

	va_start(listAr, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(listAr, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(listAr, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(listAr, double));
					break;
				case 's':
					str = va_arg(listAr, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(listAr);
}

