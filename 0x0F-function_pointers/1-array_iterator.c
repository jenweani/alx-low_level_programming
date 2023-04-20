/*
 * File: 1-array_iterator.c
 * Auth: John Enweani
 */

#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 *  as a parameter on each element of an array
 * @array: array to be modified
 * @size: size of the array
 * @action: function pointer to func to be executed on each parameter*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!action || !array)
		return;

	for (i = 0; i < (int) size; i++)
		(*action)(array[i]);
}
