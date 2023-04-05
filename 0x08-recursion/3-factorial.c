/*
 * File: 3-factorial.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * factorial - functions that returns the factorial of a given number
 * @n: number whose factorial is to be found
 *
 * Return: factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	
	return (n * factorial(n - 1));
}
