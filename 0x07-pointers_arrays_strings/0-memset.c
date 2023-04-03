/*
 * File: 0-memset.c
 * Author: John Enweani
 */

#include "main.h"
#include <string.h>

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n*sizeof(*s)));
}
