include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate strings
 * @s1: stg 1
 * @s2: stg 2
 * Return: NULL if iy doesn't run
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; *(s1 + a) != '\0'; a++)
	{}
	for (b = 0 ; *(s2 + b) != '\0' ; b++)
	{}
	x = malloc(sizeof(char) * (a + b + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < i; c++)
	{
		*(x + c) = *(s1 + c);
	}
	for (d = 0; d < b; d++)
	{
		*(x + (a + d)) = *(s2 + d);
	}
	x[a + b] = '\0';
	return (x);
}
