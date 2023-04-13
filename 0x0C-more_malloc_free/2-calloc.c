/*
 * File: 2-calloc.c
 * Auth: John Enweani
 */

#include <stdlib.h>
#include "main.h"

/**
 * set2zero - set all the bytes to 0.
 * @dst: destination
 * @j: size of the memory per-byte.
 *
 * Return: pointer to memory area dst.
 */

void *set2zero(void *dst, unsigned int j)
{
	char *d = dst;

	do
		* d++ = 0;
	while (--j != 0);

	return (d);
}

/**
 * _calloc - create and array using calloc
 * @nmemb: number elements.
 * @size: size of the type.
 *
 * Return: pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (!nmemb || !size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	set2zero(mem, nmemb * size);
	return (mem);
}
