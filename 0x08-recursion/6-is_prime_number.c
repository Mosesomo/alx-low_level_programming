#include "main.h"

int indirect_prime_recursion(int n, int x);

/**
 *is_prime_number - return prime intergers
 *@n: input
 *Return: returns 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (indirect_prime_recursion(n, n - 1));
}

/**
 *indirect_prime_recursion - calculates if a number is prime
 *@n: input
 *@x: iterator
 *Return: 1 if n is prime, 0 if not
 */

int indirect_prime_recursion(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (indirect_prime_recursion(n, x - 1));
}
