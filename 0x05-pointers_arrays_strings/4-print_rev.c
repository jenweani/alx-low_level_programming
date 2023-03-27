/*
 * File: 4-print_rev.c
 * Author: John Enweani
*/

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string arg to be reversed
*/

void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i < (strlen(s)); i--)
		putchar(s[i]);
	putchar('\n');
}
