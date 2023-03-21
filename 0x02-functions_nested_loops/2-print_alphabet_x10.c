#include "main.h"

/**
 *print_alphabet_x10 - function prints the alphabets 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}

