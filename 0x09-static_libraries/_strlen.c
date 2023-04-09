#include "main.h"

/**
 *_strlen - function to print the length of a string
 *
 * @s: function parameter
 * Return: Always 0
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
