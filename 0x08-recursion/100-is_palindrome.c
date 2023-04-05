/*
 * File: 100-is_palindrome.c
 * Author: John Enweani
*/

#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * _strlen - Returns the length of a string.
 * @s: string to be measured.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: index of the string to be checked.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string to be checked.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0, len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
