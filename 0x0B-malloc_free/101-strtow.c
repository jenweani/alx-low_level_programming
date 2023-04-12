/*
 * File: 101-strtow.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 * @str: string to be split
 *
 * Return: a pointer to an array of strings (words), NULL if it fails
 */
char **strtow(char *str)
{
	int k, j = 0, i, len = 0, wordlen = 0;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '	')
			len++;
	}

	arr = malloc(sizeof(*arr) * len);
	for (i = 0; str[i]; i++)
        {
		wordlen++;
                if (str[i] == ' ' || str[i] == '	')
		{
			arr[j] = malloc(sizeof(*arr[j]) * wordlen);
			j++;
			wordlen = 0;
		}
        }

	j = 0;
	k = 0;
	for (i = 0; str[i]; i++)
	{	
                if (str[i] == ' ' || str[i] == '	')
                {
                        arr[j][k] = '\0';
			j++;
			k++;
                }
		arr[j][k] = str[i];
        }
	arr[len] = NULL;

	return (arr);
}
