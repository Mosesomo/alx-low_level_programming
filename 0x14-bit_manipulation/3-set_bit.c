#include "main.h"

/**
 *set_bit - sets a bit at a given index to 1
 *@n: pointer
 *@index: position
 *Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
