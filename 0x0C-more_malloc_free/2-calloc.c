#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @a: char to copy
 * @n: number of times to copy a
 * Return: pointer to a memory
 */

char *_memset(char *s, char a, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
	{
		s[j] = a;
	}
	return (s);
}

/**
 * _calloc - allocate memory for any array
 * @nmemb: number of elements in the array
 * @size: size of each elements
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
