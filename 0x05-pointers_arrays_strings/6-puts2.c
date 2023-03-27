#include "main.h"

/**
 * puts2 - function that print characters
 *
 * @str: function parameter to be printed
 * Return: Always 0
 */

void puts2(char *str)
{
	int word = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		word++;
	}
	i = word - 1;
	for (k = 0 ; k <= i ; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}

