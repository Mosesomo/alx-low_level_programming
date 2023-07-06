#include "main.h"

/**
 *print_binary - prints binary of a number
 *@n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int binary;

	for (i = 63 ; i >= 0 ; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count != '\0')
			_putchar('0');
	}
	if (count == '\0')
		_putchar('0');
}
