#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size of
 * Return: NULL when it fails
 */
 
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int f;
	void *tep;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	x = malloc(nmemb * size);
	tep = x;
	if (x == 0)
	{
		return (NULL);
	}
	for (f = 0; f < (nmemb * size); f++)
		x[f] = 0;
	return (tep);
}
