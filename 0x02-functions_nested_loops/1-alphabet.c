/*
 * File: 1-alphabet.c
 * Author: John Enweani
*/

#include "main.h"

print_alphabet(void)
{
	char letter;

	for (letter='a'; letter<='z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
