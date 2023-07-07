#include "main.h"

/**
 *get_endianness - checks for endiannes in the machine
 *Return: 1 if little and 0 if big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	return (*ptr);
}
