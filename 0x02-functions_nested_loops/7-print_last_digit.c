#include "main.h"

/**
* print_last_digit - main functio
* @n: integer to get last digit of
* Return: last digit of n
*/

int print_last_digit(int n)
{
int l;

		l = n % 10;
	if (l < 0)
		{
		_putchar(-l + 48);
	return (-l);
		}
	else
		{
		_putchar(l + 48);
	return (l);
		}
}
