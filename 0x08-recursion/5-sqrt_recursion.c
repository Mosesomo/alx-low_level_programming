#include "main.h"

int indirect_sqrt_recursion(int n, int i);


/**
 *_sqrt_recursion - returns the natural square root
 *@n: input
 *Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (indirect_sqrt_recursion(n, 0));
}

/**
 *indirect_sqrt_recursion - recurses to find the actual sqrt
 *@n: input
 *@i: input
 *Return: the resulting square root
 */

int indirect_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (indirect_sqrt_recursion(n, i + 1));
}
