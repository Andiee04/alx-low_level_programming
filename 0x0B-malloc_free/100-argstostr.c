#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - assign array of args
 * @ac: assign argument count
 * @av: assign array of arguments
 * Return: char value
 */

char *argstostr(int ac, char **av)
{
	int size;
	char *s;
	int a;
	int b;
	int c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			size++;
	}

	size += (ac + 1);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}

	s[c] = '\0';

	return (s);
}
