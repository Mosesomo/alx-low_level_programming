#include <stdio.h>
#include "main.h"

/**
 *_atoi - converts string to interger
 *@s: string to be converted
 *
 *Return: result
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else
		{
			sign = 1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res * sign);
}

/**
 *main - function that multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int res = 0;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}

