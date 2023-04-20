/*
 * File: 3-get_op_func.c
 * Auth: John Enweani
 */

#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the function to perform the operation
 * @s: op passed as argument
 *
 * Return: pointer to function relating to the op given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
