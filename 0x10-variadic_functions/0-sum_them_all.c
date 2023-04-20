/*
 * File: 0-sum_them_all.c
 * Auth: John Enweani
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of paramters passed to the function
 * @...: other arguments passed to the function
 *
 * Return: If n == 0 - 0. Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
