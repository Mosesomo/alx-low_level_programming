#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 *is_digit - checks if a string contain char
 *@s: string to evaluate
 *Return: 0 if non digit is found
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if  (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 *_strlen - return the length of a string
 *@s: string to evaluate
 *Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *errors - handles errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 *main - main entry
 *@argc: argument counts
 *@argv: array of arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carr, digit1, digit2, *res, n = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
			errors();
		len1 = _strlen(s1);
		len2 = _strlen(s2);
		len = len1 + len2 + 1;
		res = malloc(sizeof(int) * len);
		if (!res)
			return (1);
		for (i = 0 ; i <= len1 + len2 ; i++)
			res[i] = 0;
		for (len1 = len1 - 1 ; len1 >= 0 ; len1--)
		{
			digit1 = s1[len1] - '0';
			carr = 0;
			for (len2 = _strlen(s2) - 1 ; len2 >= 0 ; len2--)
			{
				digit2 = s2[len1] - '0';
				carr += res[len1 + len2 + 1] + (digit1 * digit2);
				res[len1 + len2 + 1] = carr % 10;
				carr /= 10;
			}
			if (carr > 0)
				res[len1 + len2 + 1] += carr;
		}
		for (i = 0 ; i < len - 1 ; i++)
		{
			if (res[i])
				n = 1;
			if (n)
				_putchar(res[i] + '0');
		}
		if (!n)
			_putchar('0');
		_putchar('\n');
		free(res);
		return (0);
}
