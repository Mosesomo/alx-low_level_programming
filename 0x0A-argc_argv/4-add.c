#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 *check_nums - checks if number is not a digit
 *
 *@s: string to be checked
 *Return: always 0
 */

int check_nums(char *s)
{
	unsigned int count = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		if (!isdigit(s[len]))
		{
			return (0);
		}
		len++;
		count++;
	}
	return (1);
}

/**
 *main - function that adds positive numbers
 *@argc: argument count
 *@argv: array of arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int count;
	int nums;

	count = 1;
	while (count < argc)
	{
		if (check_nums(argv[count]))
		{
			nums = atoi(argv[count]);
			sum = sum + nums;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
