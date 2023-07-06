#include "main.h"

/**
 *get_bit - returns the value of a bit at index
 *@n: number
 *@index: position of a bit
 *Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	value = (n >> index) & 1;

	return (value);
}
