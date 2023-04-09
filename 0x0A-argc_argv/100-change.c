/*
 * File: 100-change.c
 * Author: John Enweani
*/

#include <stdio.h>
#include <stdlib.h>

int calc_change(int change);

/**
 * calc_change - calculate the amount of coins for change
 * @change: amount to be calculated
 *
 * Return: number of change
*/
int calc_change(int change)
{
	if (change >= 25)
		return (1 + calc_change(change - 25));
	else if (change >= 10)
		return (1 + calc_change(change - 10));
	else if (change >= 5)
		return (1 + calc_change(change - 5));
	else if (change >= 2)
		return (1 + calc_change(change - 2));
	else if (change >= 1)
		return (1 + calc_change(change - 1));
	else
		return (change);
}

/**
 * main - program that prints the minimum number of coins 
 *  to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if the number of arguments passed to your
 *  program is not exactly 1, 0 otherwise
*/
int main(int argc, char *argv[])
{
	int change, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	change = calc_change(num);
	printf("%d\n", change);

	return (0);
}
