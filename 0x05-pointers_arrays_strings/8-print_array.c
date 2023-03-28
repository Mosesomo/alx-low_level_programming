#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print array element
 *
 * @a: array name
 * @n: array element
 * Return: a and b
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0 ; k < (n - 1) ; k++)
	{
		printf("%d, ", a[k]);
	}
		if (k == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}

