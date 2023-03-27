#include "main.h"

/**
 * swap_int - function that swaps values
 *
 * @a: function parameter to be swapped
 * @b: function parameter to be swapped
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

