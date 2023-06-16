#include <stdlib.h>
#include "main.h"

/**
 *_realloc -  reallocates a memory block
 *@ptr: pointer to the memory previously allocated
 *@old_size: size of the allocated memory for ptr
 *@new_size: size of the new memory block
 *Return: pointer to the newly memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (NULL);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
