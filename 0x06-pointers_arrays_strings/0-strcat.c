/*
 * File: 0-strcat.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: additional to be concatenated
 * @dest: original string
 *
 * Return: string containing the two strings
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
