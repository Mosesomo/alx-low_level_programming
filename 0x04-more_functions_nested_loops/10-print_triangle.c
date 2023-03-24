#include "main.h"

/**
 *print_triangle - function that return triangle drawing
 *
 *@size: function parameter
 *Return: Always 0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = i ; j < size ; j++)
			{
				_putchar(' ');
			}
			for (j = 1 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

