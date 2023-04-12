/*
 * File: 101-strtow.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - function that splits a string into words
 * @str: string to be split
 *
 * Return: a pointer to an array of strings (words), NULL if it fails
 */
char **strtow(char *str)
{
	char **arr;
	int i = 0, wordcount, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wordcount = count_words(str);
	if (wordcount == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (wordcount + 1));
	if (arr == NULL)
		return (NULL);

	for (w = 0; w < wordcount; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		arr[w] = malloc(sizeof(char) * (letters + 1));

		if (arr[w] == NULL)
		{
			for (; w >= 0; w--)
				free(arr[w]);

			free(arr);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			arr[w][l] = str[i++];

		arr[w][l] = '\0';
	}
	arr[w] = NULL;

	return (arr);
}
