/*
 * File: 4-pow_recursion.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * _pow_recursion - function that returns the value
 *  of x raised to the value of y
 * @x: number to be multiplied
 * @y: power to be raised to
 * 
 * Return: the value of x raised to power of y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 1)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	else
		return (-1);
}
