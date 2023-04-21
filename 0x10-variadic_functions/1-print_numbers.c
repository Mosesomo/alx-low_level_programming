#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers - prints numbers followed by a new line
 *@separator: the string to be printed between the line
 *@n: number of arguments to pass
 *@...: arguments to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0 ; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
