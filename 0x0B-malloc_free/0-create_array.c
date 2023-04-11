/*
 * File: 0-create_array.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 *                it with a specific char
 * @size: size of the array to be initialised
 * @c: character that initialised the array
 *
 * Return: array initialised
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if ((int) size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
