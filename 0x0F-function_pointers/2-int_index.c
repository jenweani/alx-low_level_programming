/*
 * File: 2-int_index.c
 * Auth: John Enweani
 */

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for which
 *  the cmp function does not return 0, -1 if no elements matches
 *   or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}

	return (-1);
}
