#include "main.h"

/**
 *_abs - function to print absolute value
 *
 *@k: function parameter to be checked
 *Return: Always 0
 */

int _abs(int k)
{
	if (k < 0)
		k = -(k);
	else if (k >= 0)
		k = k;
	return (k);
}

