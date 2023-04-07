/*
 * File: 1-args.c
 * Author: John Enweani
*/

#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: always 0
*/
int main(int __attribute__((__unused__)) argc, *argv[])
{
	printf("%d\n", argc);

	return (0);
}
