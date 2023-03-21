/*
 * File: 4-isalpha.c
 * Author: John Enweani
*/

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if the input is an alphabet
 * @c: input character
 *
 * Return: 1 if input is alphabet, 0 otherwise
*/

int _isalpha(char c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
