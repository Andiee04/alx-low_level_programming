#include "main.h"

/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
