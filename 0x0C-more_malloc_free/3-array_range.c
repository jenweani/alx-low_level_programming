/*
 * File: 3-array_range.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	arr = malloc(sizeof(int) * j);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		arr[i] = min++;

	return (arr);
}
