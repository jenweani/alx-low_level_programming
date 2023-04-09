/*
 * File: 100-change.c
 * Auth: John Enweani
*/

#include <stdio.h>
#include <stdlib.h>

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
	int change = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		change++;
		if ((num - 25) >= 0)
		{
			num -= 25;
			continue;
		}
		if ((num - 10) >= 0)
		{
			num -= 10;
			continue;
		}
		if ((num - 5) >= 0)
		{
			num -= 5;
			continue;
		}
		if ((num - 2) >= 0)
		{
			num -= 2;
			continue;
		}
		num--;
	}

	printf("%d\n", change);

	return (0);
}
