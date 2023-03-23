/*
 * File: 6-print_line.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * print_line - prints a straight line n times
 * @n: number of times _ will be printed
 *
 * Return: Always 0
*/

void print_line(int n)
{
	int i;

	if (!(n <= 0))
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
