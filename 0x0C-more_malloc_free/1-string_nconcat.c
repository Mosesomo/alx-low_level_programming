#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat -  concatenates n bytes of a string
 *@s1: string to append to
 *@s2: string to concatenate from
 *@n: number of bytes from s2 to concatenate
 *Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncont;
	unsigned int x, y, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = s2[len2];

	ncont = malloc(sizeof(char) * (len1 + n + 1));
	if (ncont == NULL)
		return (NULL);

	x = 0;
	while (x < len1)
	{
		ncont[x] = s1[x];
		x++;
	}

	y = 0;
	while (y < n)
	{
		ncont[x + y] = s2[y];
		y++;
	}
	ncont[x + y] = '\0';
	return (ncont);
}
