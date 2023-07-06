#include "main.h"

/**
 *clear_bit - function that sets the value of a bit
 *@n: pointer
 *@index: position
 *Return: 1 on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
