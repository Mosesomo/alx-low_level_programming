#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicates a string
 *@str: string to be duplicated
 *
 *Return: pointer to the newly allocated string
 */

char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0 ; str[i] ;  i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
