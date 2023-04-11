/*
 * File: 1-strdup.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: new string which is a duplicate of the string
 *
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *dup;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}
