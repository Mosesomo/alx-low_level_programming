#ifndef DOG_H
#define DOG_H

/**
 *struct dog - basic info
 *@name: name of a dog
 *@age: age of the dog
 *@owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * new_dog - typedef for struct dog
 */

typedef struct dog new_dog;

#endif
