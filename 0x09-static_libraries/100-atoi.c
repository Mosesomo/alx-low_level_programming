#include "main.h"

/**
 *_atoi - function to convert string to intergers
 *@s: string to be converted
 *Return: res
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while  (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '+')
		{
			sign = 1;
		}
		else
		{
			sign = -1;
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
