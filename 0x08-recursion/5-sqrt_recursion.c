/*
 * File: 5-sqrt_recursion.c
 * Author: John Enweani
*/

#include "main.h"

int find_sqrt_recursive(int n, double approx);

/**
 * find_sqrt_recursive - find the sqrt of n recursively
 * @n: number to find the sqrt of
 * @approx: approximation for the sqrt
 *
 * Return: approximate sqrt of n
*/
int find_sqrt_recursive(int n, double approx)
{
	if ((approx * approx) == n)
		return (approx);
	if (approx == (n / 2))
		return (-1);
	return (find_sqrt_recursive(n, approx + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find the sqrt of
 *
 * Return: sqrt of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1)
		return (1);

	return (find_sqrt_recursive(n, 0));
}
