/*
 * File: 100-atoi.c
 * Author: John Enweani
*/

#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 *
 * Return: returns the int equivalent of the string
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
