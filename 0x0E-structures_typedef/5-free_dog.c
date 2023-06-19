#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees the memory allocated for the dog
 *@d: struct to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
