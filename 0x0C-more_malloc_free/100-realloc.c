/*
 * File: 100-realloc.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: input variable
 * @new_size: input variable
 *
 * Return: string with new allocation
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_str;
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_str = malloc(new_size);
	if (!new_str)
		return (NULL);

	p = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_str[i] = p[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_str[i] = p[i];
	}

	free(ptr);
	return (new_str);
}
