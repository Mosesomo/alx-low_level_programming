#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - prints name using pointer to a function
 *@name: string to be printed
 *@f: pointer to a funtion
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
