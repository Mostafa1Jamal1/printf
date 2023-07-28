#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int b = -83474;
	int x = -56435;
	int len;
	int len2;
	/* Normal Cases */
	_printf("Custom printf\n");

	len = _printf("binary:[%p]\n", b);
	len = _printf("unsigned:[%u]\n", b);
	len = _printf("octal:[%o]\n", b);
	len = _printf("Octal:[%o]\n", b);
	len2 = _printf("HEXA:[%X]\n", b);
	len2 = _printf("hexa:[%p]\n", b);
	_printf("Length:[%p]\n", len);
	_printf("Length:[%d]\n", len2);
	printf("*******************************\n");
	printf("Built-In printf\n");

	len = printf("unsigned(83474):[%p]\n", b);
	len = printf("unsigned(56435):[%u]\n", x);
	len = printf("Octal:[%o]\n", b);
	len2 = printf("HEXA:[%X]\n", b);
	len2 = printf("hexa:[%p]\n", b);
	printf("Length:[%d]\n", len);
	printf("Length:[%d]\n", len2);
	return (0);
}
