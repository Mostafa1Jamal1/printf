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
	int n = va_arg(arg, int);
	int div = 1, i = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	for (; num / div >= 10; i++)
		div *= 10;
	for (i = 0; div != 0; i++)
	{
		_putchar((num / div)  + '0');
		num %= div;
		div /= 10;
	}
	return (i);
}
