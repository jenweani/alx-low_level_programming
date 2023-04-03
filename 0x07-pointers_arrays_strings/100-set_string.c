/*
 * File: 100-set_string.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: source for copy
 * @to: string to copy to.
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
