/*
 * File: 1-string_nconcat.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fuction that concats two strings but with s2 by n amount.
 * @s1: base sting to concat to. `Null` will return as empty.
 * @s2: string to copy from. 'NULL' will return as empty string.
 * @n: amount of s2 to copy.
 * Return: pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, a, b;

	a = b = 0;
	if (s1)
		for (; s1[a]; a++)
			;
	if (s2)
		for (; s2[b]; b++)
			;
	if (!(n >= b))
		b = n;

	string = malloc(sizeof(char) * (a + b) + 1);
	if (!string)
		return (NULL);

	for (i = 0; i < (a + b); i++)
	{
		if (i < a)
			string[i] = s1[i];
		else
			string[i] = s2[i - a];
	}

	string[i] = '\0';

	return (string);
}

