#include "main.h"

/**
 * leet - function to encode
 * @a: input value
 * Return: a
 */

char *leet(char *a)
{
	int i, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (k = 0 ; k < 10 ; k++)
		{
			if (a[i] == s1[k])
			{
				a[i] = s2[k];
			}
		}
	}
	return (a);
}

