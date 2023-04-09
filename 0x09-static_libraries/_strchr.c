#include "main.h"

/**
 * _strchr - function
 * @s: input
 * @c: input
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (j = 0; s[j] >= '\0' ; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}

