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
	int strlen = _strlen(s);

	for (i = (strlen - 1); i < strlen; i--)
		putchar(s[i]);
	putchar('\n');
}
