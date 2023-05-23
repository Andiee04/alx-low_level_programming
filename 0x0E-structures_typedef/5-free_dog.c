#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - add information to the dog info
 * @d: pointer to a dog of type dog_t
 * Return: null
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
