#include "main.h"
#include <stdlib.h>

/**
 *array_range - craetes an araay of intergers
 *@min: minimum range of values
 *@max: maximum range of values
 *Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < (max - min) ; i++)
	{
		arr[i] = min + i;
	}
	return  (arr);
}
