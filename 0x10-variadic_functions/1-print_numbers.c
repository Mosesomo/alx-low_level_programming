#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - prints the parameters passed
 *@separator: separates the parameters printed
 *@n: number of parameters to be passed
 *@...: parameters to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list nums;

	va_start(nums, n);
	for (idx = 0 ; idx < n ; idx++)
	{
		printf("%d", va_arg(nums, int));
		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
