#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = 1 ; k < 10 ; k++)
		{
			if (i < k && i != k)
			{
				putchar(i + '0');
				putchar(k + '0');
				if (i + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

