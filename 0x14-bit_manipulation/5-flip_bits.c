#include "main.h"

/**
 *flip_bits - counts the number of bits to change
 *@n: first number
 *@m: second number
 *Return: number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, idx;
	unsigned long int curr;
	unsigned long int result = n ^ m;

	for (idx = 63 ; idx >= 0 ; idx--)
	{
		curr = result >> idx;
		if (curr & 1)
			count++;
	}
	return (count);
}
