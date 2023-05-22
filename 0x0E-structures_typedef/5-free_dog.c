#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - the function frees dogs
 * @d: the poppy to freeee
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
