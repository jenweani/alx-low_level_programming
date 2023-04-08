/*
 * File: 3-mul.c
 * Author: John Enweani
*/

#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if program does not receive two arguments
 *  0 otherwise
*/
int main(int argc, char *argv[])
{
	int result = 1, i;

	if (argv[1] && argv[2])
	{
		for (i = 1; i < argc; i++)
			result *= argv[i];
		printf("%d", result);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
