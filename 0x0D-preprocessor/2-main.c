/*
 * File: 2-main.c
 * Auth: John Enweani
 */

#include <stdio.h>

/**
 * main - program that prints the name of the file it was
 *  compiled from, followed by a new line.
 *
 * Return: always 0
 */
int main (void)
{
	char name[] = __FILE__;

	printf("%s\n", name);

	return (0);
}
