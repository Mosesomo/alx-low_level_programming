#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - prints each element of array
 *@array: array
 *@size: how many elements to print
 *@action: pointer
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for  (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}

