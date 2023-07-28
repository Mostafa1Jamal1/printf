#include "main.h"
/**
 * print_pointer - convert and print to HEXAdecimal
 * @arg: list of argument from _printf
 * Return: the number of bytes printed
*/
int print_pointer(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tmp = n;
	char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7',
			'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	char *hex_n;
	int ret = 0, size = 0, i;

	if (n == 0)
	{
		_printf("(nil)");
		ret += 1;
		return (ret);
	}
	while (tmp)
	{
		tmp /= 16;
		size++;
	}
	hex_n = malloc(size + 1);
	if (hex_n == NULL)
		exit(-1);
	_putchar('0');
	_putchar('x');
	for (i = 0; n != 0; i++)
	{
		*(hex_n + i) = hex[n % 16];
		n /= 16;
		ret++;
	}
	*(hex_n + i) = '\0';
	for (i = (size - 1); i >= 0; i--)
	{
		_putchar(hex_n[i]);
	}
	return (ret);
}
