#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - prints thw minimum amount of coin to make
 *change
 *@argc: argument count
 *@argv: array of arguments
 *Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};
	int num, i;
	int coinCount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0 ; i < 5 && num >= 0 ; i++)
	{
		while (num >= coin[i])
		{
			coinCount++;
			num = num - coin[i];
		}
	}
	printf("%d\n", coinCount);
	return (0);
}
