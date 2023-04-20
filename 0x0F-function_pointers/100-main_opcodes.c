/*
 * File: 100-main_opcodes.c
 * Auth: John Enweani
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg, i;
	int (*main_func)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg = atoi(argv[1]);

	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < arg; i++)
	{
		opcode = *(unsigned char *)main_func;
		printf("%.2x", opcode);

		if (i == arg - 1)
			continue;
		printf(" ");

		main_func++;
	}

	printf("\n");

	return (0);
}
