/*
 * File: 3-print_all.c
 * Auth: John Enweani
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char
 * @arg: A list of arguments pointing the character to be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int
 * @arg: A list of arguments pointing to the integer to be printed
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float
 * @arg: A list of arguments pointing to the float to be printed
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - function that prints a string
 * @arg: list of arguments pointing to the string to be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Function that prints anything followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: other variables
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	int i = 0, j = 0;
	char *sep = "";
	printFuncs_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg_list, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].sym)))
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print(arg_list);
			sep = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(arg_list);
}
