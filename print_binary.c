#include "main.h"
/**
 * print_bin - convert and print to binary
 * @arg: list of argument from _printf
 * Return: the number of bytes printed
*/
int print_bin(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tempn = n;
	char *bin;
	int ret = 0, arr_size = 0, i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (tempn)
	{
		tempn /= 2;
		arr_size++;
	}
	bin = malloc(arr_size);
	if (bin == NULL)
		exit(-1);
	for (i = 0; n != 0; i++)
	{
		*(bin + i) = n % 2;
		n /= 2;
		ret++;
	}
	i--;
	while (!(i < 0))
	{
		_putchar(*(bin + i) + '0');
		i--;
	}
	return (ret);
}
