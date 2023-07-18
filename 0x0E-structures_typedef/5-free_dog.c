#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - frees amemory of dog
 * @d: struct to dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
