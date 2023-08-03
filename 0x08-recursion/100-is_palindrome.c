#include "main.h"
/**
 * _check_strlen - finds length of a string.
 * @s: string.
 * Return: string length.
 */
int _check_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _check_strlen(s + 1));
}

/**
 * check_palindrome - checks if start equals end.
 * @s: string.
 * @start: first index of string.
 * @end: last index of string.
 * Return: 1 if successful.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string.
 * Return: 1.
 */
int is_palindrome(char *s)
{
	int len = _check_strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}

