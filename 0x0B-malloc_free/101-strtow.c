#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments
 *@str: string
 *@av: arguments
 * Return: a pointer to a new string
 */

char **strtow(char *str)
{
	int i, w, j, k, see, m, wordb;
	char **p;
	char *x;

	w = 0;
	j = 0;
	i = 0;
	see = 0;
	if (*str == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
			w++;
	}
	p = (char **)malloc((w + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (wordb = 0; str[wordb] && j <= w; wordb++)
	{
		see = 0;
		if (str[wordb] != ' ')
		{
			for (i = wordb ; str[i] != '\0'; i++)
			{
				if (str[i] == ' ')
					break;
			see++;
			}
			*(p + j) = (char *)malloc((see + 1) * sizeof(char));
			if (*(p + j) == NULL)
			{
				for (k = 0; k <= j; k++)
				{
					x = p[k];
					free(x);
				}
				free(p);
				return (NULL);
			}
			for (m = 0; wordb < i; wordb++)
			{
				p[j][m] = str[wordb];
				m++;
			}
			p[j][m] = '\0';
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}
