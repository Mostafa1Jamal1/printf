#include "main.h"
/**
 * print_str - prints a string
 * @arg: va_list type argument from which
 * the string will be printed
 * Return: number of characters printed
*/
int print_str(va_list arg)
{
	char *str = va_arg(arg, char *);
	int ret = 0;

	while(*str)
	{
		_putchar(*str);
		str++;
		ret++;
	}
	return (ret);
}
