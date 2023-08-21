#include "main.h"

/**
 * _strcpy - function to copy string pointer
 *
 * @dest: finction to copy to
 * @src: function to copy from
 * Retur: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int  x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (x = 0 ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

