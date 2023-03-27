#include "main.h"

/**
 * rev_string - function to reverse string
 *
 * @s: function parameter
 * Return: Always 0;
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int j;

	while (s[counter] != '\0')
		counter++;
	for (j = 0 ; j < counter ; j++)
	{
		counter--;
		rev = s[j];
		s[j] = s[counter];
		s[counter] = rev;
	}
}

