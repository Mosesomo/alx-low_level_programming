#include <stdio.h>

/**
 * main - the function prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

