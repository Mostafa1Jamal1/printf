#include "main.h"
/**
 * print_octal - convert and print to octal
 * @arg: list of argument from _printf
 * Return: the number of bytes printed
*/
int print_octal(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tmp = n;
	char *octa;
	int ret = 0, arr_size = 0, i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (tmp)
	{
		tmp /= 8;
		arr_size++;
	}
	octa = malloc(arr_size);
	if (octa == NULL)
		exit(-1);
	for (i = 0; n != 0; i++)
	{
		*(octa + i) = n % 8;
		n /= 8;
		ret++;
	}
	i--;
	while (!(i < 0))
	{
		_putchar(*(octa + i) + '0');
		i--;
	}
	return (ret);
}
/**
 * print_unsigned - convert and print to unsigned
 * @arg: list of argument from _printf
 * Return: the number of bytes printed
*/
int print_unsigned(va_list arg)
{
	unsigned int num = va_arg(arg, int);
	int div = 1, i = 0, x = 0;

	if (num = 0)
	{
		_putchar('0');
		i += 1;
	}
	for (; num / div >= 10; x++)
		div *= 10;
	for (; div != 0; i++)
	{
		_putchar((num / div)  + '0');
		num %= div;
		div /= 10;
	}
	return (i);
}
