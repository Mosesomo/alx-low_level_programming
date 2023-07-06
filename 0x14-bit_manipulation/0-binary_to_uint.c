#include "main.h"

/**
 *binary_to_uint - converts binary  number to unsigned int
 *@b: pointer to the string
 *
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, result = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		result = 2 * result + (b[len] - '0');
		len++;
	}
	return (result);
}
