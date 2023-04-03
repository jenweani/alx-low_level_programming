/*
 * File: 2-strchr.c
 * Author: John Enweani
 */

#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: string to be searched.
 * @c: character to be located.
 *
 * Return: If c is found : a pointer to the first occurence.
 *         If c is not found : NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i+)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
