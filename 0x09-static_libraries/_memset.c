#include "main.h"

/**
 * _memset - function that fills a block of memory with a specific value
 * @s: Addrss of memory to be fullfilled
 * @b: value
 * @n: number of bytes
 * Return: changed array with the new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	for (i = 0; i > 0 ; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
