#include <stdio.h>

void func(void)__attribute__((constructor));

/**
 *func - prints a sentence before the main
 *functions is excuted
 */

void func(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house my back!\n");
}

