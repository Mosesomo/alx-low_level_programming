#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 *int_index - return the index of the first element if comparison is true
 *@array: array
 *@size: number of elements in the array
 *@cmp: pointer to a function for comparison
 *Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if ((*cmp)(array[i]))
		return (i);
	}
	return (-1);
}
