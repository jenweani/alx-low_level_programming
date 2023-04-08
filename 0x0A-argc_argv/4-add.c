/*
 * File: 4-add.c
 * Author: John Enweani
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if one of the number contains symbols that are not digits
 *  0 otherwise
*/
int main(int argc, char *argv[])
{
	int result = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
