#include "main.h"

/**
 *print_last_digit - function that prints last digit
 *
 *@j: function parameter to be printed
 *Return: Always 0
 */

int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}

