#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: point to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *lag;
	int x;
	unsigned int f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	while (s1[x] != '\0')
		x++;
	lag = malloc(sizeof(char) * (x + n + 1));
	if (lag == NULL)
		return (NULL);
	x = f = 0;
	while (s1[x] != '\0')
	{
		lag[x] = s1[x];
		x++;
	}
	while (f < n && s2[f] != '\0')
	{
		lag[x] = s2[f];
		x++, f++;
	}
	lag[x] = '\0';
	return (lag);
}
