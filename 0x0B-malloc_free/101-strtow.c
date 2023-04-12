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
	int k, j = 0, i = 0, len = 0, wordlen = 0;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '	')
			len++;
		i++;
	}

	arr = malloc(sizeof(*arr) * len);
	i = 0;
	while (str[i])
        {
		wordlen++;
                if (str[i] == ' ' || str[i] == '	')
		{
			arr[j] = malloc(sizeof(*arr[j]) * wordlen);
			j++;
			wordlen = 0;
		}
                i++;
        }

	i = 0;
	j = 0;
	k = 0;
        while (str[i])
	{	
                if (str[i] == ' ' || str[i] == '	')
                {
                        arr[j][k] = '\0';
			j++;
			k++;
                }
		arr[j][k] = str[i];
                i++;
        }
	arr[len] = NULL;

	return (arr);
}
