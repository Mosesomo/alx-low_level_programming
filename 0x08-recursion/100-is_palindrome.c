#include "main.h"

int _pal_recursion(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 *is_palindrome - checks if a string is palindrome
 *@s: string input
 *Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal_recursion(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - returns length of the string
 *@s: string input
 *Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *_pal_recursion - checks the characters recursively
 *@s: string to check
 *@i: iterator
 *@len: length of the string
 *Return: 1 if pal, 0 if not
 */

int _pal_recursion(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_pal_recursion(s, i + 1, len - 1));
}
