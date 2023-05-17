#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or 0
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int u;
	int b;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
		;
	strnew = (char *)malloc(b + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (u = 0; str[u] != '\0'; u++)
			strnew[u] = str[u];
	} else
	{
		return (NULL);
	}
	strnew[u] = '\0';
	return (strnew);
}
