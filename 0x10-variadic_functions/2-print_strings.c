#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_strings - prints string followed by a new line
 *@separator: separates the strings
 *@n: number of parameters passed
 *@...: parameters passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *s;
	va_list strings;

	va_start(strings, n);
	for (idx = 0 ; idx < n ; idx++)
	{
		s = va_arg(strings, char*);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);
		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

