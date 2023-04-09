#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: number of arguments
 * @argv: array arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num, i, res;
	int coin[] = {45, 20, 10, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0 ; i < 5 && num >= 0 ; i++)
	{
		while (num >= coin[i])
		{
			res++;
			num = num - coin[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
