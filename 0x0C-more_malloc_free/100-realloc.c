#include "main.h"


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: old memory
 * @new_size: new memory
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *nw;
	char *ol;

	ol = ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == 0)
	{
		nw = malloc(new_size * sizeof(char));
		return (nw);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	nw = malloc(new_size * sizeof(char));
	if (nw == 0)
		return (NULL);
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			nw[x] = ol[x];
		return (nw);
	}
	free(ptr);
	return (nw);
}
