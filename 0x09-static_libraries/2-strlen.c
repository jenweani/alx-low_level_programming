/*
 * File: 2-strlen.c
 * Author: John Enweani
*/

#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string arg to be checked
 *
 * Return: length of arg s
*/

int _strlen(char *s)
{
	int len;

	len = strlen(s);

	return (len);
}
