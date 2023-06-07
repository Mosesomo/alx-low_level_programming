#include "main.h"

/**
 *factorial - returns the factorial of the number
 *@n: input
 *
 *Return: always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
