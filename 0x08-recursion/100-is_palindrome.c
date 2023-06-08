#include "main.h"
/**
 * _stringlength - function checks
 * for the length of a string.
 *
 * @s: string
 *
 * Return: length of the string
 **/
int _stringlength(char *s)
{
	if (*s != '\0')/* if the pointer is not at the terminating char*/
	{
		return (1 + _stringlength(s + 1));/*keeping calling the function*/

	}
	return (0);/*otherwise end the function*/
}

/**
 * _check_palindrome - checks if the index of the
 * first character is equal to the index of the
 * last character.
 * @s: string
 * @first: index of the first character of the string
 * @last: index of the last charcter of the string.
 *
 *Return: 1 if palindrome and 0 if not.
 **/
int _check_palindrome(char *s, int first, int last)
{
	if (first >= last)
		return (1);
	if (s[first] != s[last])
	{
		return (0);
	}
	return (_check_palindrome(s, first + 1, last - 1));
	
}

/**
 * is_palindrome - checks the string is a
 * palindrome
 *
 * @s: string
 *
 * Return: 1 if succesful
 **/
int is_palindrome(char *s)
{
	int length = _stringlength(s);

	if (length == 0 || length == 1)
		return (1);
	return (_check_palindrome(s, 0, length - 1));
}
