#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print varying input values of arguments
 * @format: format string that holds arg types
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
