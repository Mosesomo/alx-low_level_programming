#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using memory
 * @b: number of bytes to allocates
 * Return: always 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
