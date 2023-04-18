/*
 * File: 2-main.c
 * Auth: John Enweani
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the name of the file it was
 *  compiled from, followed by a new line.
 */

int main (void)
{
	char name[] = __FILE__;

	printf("%s\n", name);
	
	return (0);
}
