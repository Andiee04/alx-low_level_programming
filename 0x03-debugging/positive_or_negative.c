#include "main.h"

/**
* checks for positive or negative
*
* Return: always 0
*/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative ", i);
	else if (i == 0)
		printf("%d is zero \n", i);
	else
		printf("%d is positive \n", i);
}
