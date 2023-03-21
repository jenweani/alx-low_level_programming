/*
 * File: 3-islower.c
 * Author: John Enweani
*/

#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if the input is a lower case alphabet
 * Return: returns 1 if input is lowercase alphabet otherwise returns 0
*/

int _islower(char c)
{
	if(islower(c))
	{
		return (1);
	}else
	{
		return (0);
	}
}
