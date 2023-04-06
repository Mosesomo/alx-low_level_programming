#include "main.h"

int actual_prime(int n, int a);

/**
 * is_prime_number - return if an interger is a prime
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number,0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime -function calculate if a number is a prime recursively
 * @n: input
 * @a: iterator
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}

