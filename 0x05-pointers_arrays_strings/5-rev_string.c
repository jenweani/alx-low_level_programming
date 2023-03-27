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
	int i;
	int len = strlen(s);
	char s_cpy[len] = s;

	for (i = len - 1; i >= 0; i--)
		*s[len-1-i] = s_cpy[i];
}
