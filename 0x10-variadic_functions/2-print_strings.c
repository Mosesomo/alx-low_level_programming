#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints a string followed by a new line
 *@separator: strings to be printed between tht strings
 *@n: number of strings to be passed
 *@...: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}


