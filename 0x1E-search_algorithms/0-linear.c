#include "search_algos.h"

/**
*linear_search - function that searches a value in a array
*@array: pointer to the array to be searched
*@size: size of the array
*@value: value to be searched in the array
*Return: The index of the value , else return -1
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
    {
        return (-1);
    }

    for (i = 0 ; i < size ; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}