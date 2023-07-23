#include "main.h"
/**
 * print_char - prints a char
 * @arg: va_list type argument from which
 * the char will be printed
 * Return: 1 (Success as one char printed)
*/
int print_char(va_list arg)
{
	char c = (char)va_arg(arg, int);

	return (write(1, &c, 1));
}
