#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion -fubction that prints the naturalsquare root of a number
 * @n: number to calculate the sqrt
 * Return: the resulting aquare root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - function recurses to find the natural
 * @n: number to calculate the square root
 * @j: iterator
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}

