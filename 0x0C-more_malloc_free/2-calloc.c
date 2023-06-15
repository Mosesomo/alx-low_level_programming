#include "main.h"
#include <stdlib.h>

/**
 *_memset - fills the memory with a byte
 *@s: memory area to be filled
 *@b: char to copy
 *@n: number of times to copy b
 *Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements in the in the array
 *@size: size of each element
 *Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
