/*
 * File: 0-malloc_checked.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * 0-malloc_checked.c -  function that allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		free(memory);
		exit(98);

	return (memory);
}
