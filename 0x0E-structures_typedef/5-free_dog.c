/*
 * File: 5-free_dog.c
 * Auth: John Enweani
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to dog stuct in memory.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
