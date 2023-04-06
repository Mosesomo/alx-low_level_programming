#include "main.h"

/**
 * _sqrt_recursion -fubction that prints the naturalsquare root of a number
 * @n: number to calculate the sqrt
 * Return: the resulting aquare root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

