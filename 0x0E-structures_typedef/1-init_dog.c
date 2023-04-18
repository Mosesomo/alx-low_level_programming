#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes a variable type of struct dog
 *@d : pointer to the struct dog
 *@name: initializes name
 *@age: initializes age of the dog
 *@owner: initializes the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
