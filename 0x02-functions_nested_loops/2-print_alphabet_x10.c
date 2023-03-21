/*
 * File: 2-print_alphabet_x10.c
 * Author: John Enweani
*/

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times then new line
*/

void print_alphabet_x10(void)
{
	char letter;

	for (int i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}