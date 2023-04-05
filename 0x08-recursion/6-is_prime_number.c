/*
 * File: 6-is_prime_number.c
 * Author: John Enweani
*/

#include "main.h"

int check_divisible(int n, int divisor);

/**
 * check_divisible - checks if number is divisible
 * @n: number to be checked
 * @divisor: divisor
 *
 * Return: returns 0 if it is divisible, 1 otherwise
*/
int check_divisible(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);

	if (divisor == n / 2)
		return (1);

	return (check_divisible(n, divisor + 1));
}

/**
 * is_prime_number - function that checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2 || n == 3)
		return (1);

	return (check_divisible(n, 2));
}
