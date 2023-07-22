/*
 * Author: 0xTariq-dev, Mostafa1Jamal1
 * File: print_int.c
 */

#include "main.h"

/**
 * print_int - Prints An integer.
 * @arg: The list of args to print.
 * Return: number of digits printed
 */
int print_int(va_list arg)
{
	int i = va_arg(arg, int);
	int n, end = i % 10, d, exclude = 1, x = 1;

	i = i / 10;
	n = i;

	if (end < 0)
	{
		write(1, '-', 1);
		n = -n;
		end = -end;
		i++;
	}

	return ();
}
