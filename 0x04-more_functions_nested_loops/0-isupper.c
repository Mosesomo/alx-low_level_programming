#include "main.h"

/**
 *_isupper - function to check uppercase characters
 *
 *@c: function parameter to be checked
 *Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

