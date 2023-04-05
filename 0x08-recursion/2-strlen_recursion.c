/*
 * File: 2-strlen_recursion.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * _strlen_recursion - function that returns
 * the length of a string.
 * @s: string that the length will be returned
 *
 * Return: the length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}
