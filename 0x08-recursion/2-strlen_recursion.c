#include "main.h"

/**
 *_strlen_recursion - function that return length
 *@s: input
 *Return: always 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}


