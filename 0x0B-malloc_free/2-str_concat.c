/*
 * File: 2-str_concat.c
 * Auth: John Enweani
 */

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory which contains the
 *         concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_index = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_index++] = s2[i];

	return (concat_str);
}
