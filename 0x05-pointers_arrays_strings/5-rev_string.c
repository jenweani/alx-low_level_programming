/*
 * File: 5-rev_string.c
 * Author: John Enweani
*/

#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
*/

void rev_string (char *s)
{
	int i = 0, len = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
