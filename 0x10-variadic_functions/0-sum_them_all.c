#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its operators
 *@n: number of parameters to be passed
 *@...: a variable number of parameters to calculate
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0 ; i < n ; i++)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}
