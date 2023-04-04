#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be searched
 * Return: always 0
 */


char *_strstr(char *haystack, char *needle)
{
	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

