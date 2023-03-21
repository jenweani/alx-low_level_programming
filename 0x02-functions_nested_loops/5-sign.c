/*
 * File: 5-sign.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the input int
 *
 * Return: returns + if the input is greater than zero,
 * 0 if input is zero and - if input is less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
