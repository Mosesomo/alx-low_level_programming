#include "main.h"

/**
 * _memcpy - function that coppies memory area
 * @dest: memoery dstination
 * @src: memory source
 * @n: number of bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (a = 0; a < i ; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

