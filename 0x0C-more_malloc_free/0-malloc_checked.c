#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate memory using malloc
 *@b: size input
 *Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
