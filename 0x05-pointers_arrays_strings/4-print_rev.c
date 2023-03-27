#include "main.h"

/**
 *print_rev - function to reverse a string
 *
 *@s: function parameter
 *Return: Always 0
 */

void print_rev(char *s)
{
	int rev = 0;
	int i;

	while (*s != '\0')
	{
		rev++;
		s++;
	}
	s--;
	for (i = rev ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

