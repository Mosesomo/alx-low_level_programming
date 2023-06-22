#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_all - function that prints anything
 *@format: number of arguments passed
 *
 *@...: parameters passed
 */

void print_all(const char * const format, ...)
{
	int idx;
	char *str, *separator = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		idx = 0;
		while (format[idx])
		{
			switch (format[idx])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;

				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						printf("(nil)");
					printf("%s%s", separator, str);
					break;
				default:
					idx++;
					continue;
			}
			separator = ", ";
			idx++;
		}
	}
	printf("\n");
	va_end(list);
}

