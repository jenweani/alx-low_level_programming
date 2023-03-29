/*
 * File: 0-strcat.c
 * Author: John Enweani
*/

#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @src: additional to be concatenated
 * @dest: original string
 *
 * Return: string containing the two strings
*/

char *_strcat (char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
