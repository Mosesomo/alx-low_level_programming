#include "main.h"

/**
 * _strcat - function for copying string
 *
 * @dest: function parameter destintion
 * @src: function parameter source
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}
