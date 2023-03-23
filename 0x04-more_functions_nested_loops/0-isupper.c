/*
 * File: 0-isupper.c
 * Author: John Enweani
*/

#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if the input is an uppercase alphabet
 * @c: char input is received as  int
 *
 * Return: 1 if the input is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
