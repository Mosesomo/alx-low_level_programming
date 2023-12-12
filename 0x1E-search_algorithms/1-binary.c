#include "search_algos.h"

/**
*binary_search - function that searches a value in array
*@array: pointer to the array to be searched
*@size: size of the array
*@value: value to be searched
*Return: Index of the value else return -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low ; i <= high ; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
			high = mid - 1;
		}
	return (-1);
}
