/*
 * File: 1-swap.c
 * Author: John Enweani
*/

/**
 * swap_int - swaps the value of two integers.
 * @*a: collects address of int 
 * @*b: collects address of int
*/

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
