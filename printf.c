#include "main.h"
/**
 * _printf - same as printf function
 * @format: a string have possible format
 * Return: number of bytes printed
 * or -1 on Error
*/

int _printf(const char *format, ...)
{
	int ret = 0;
	int (*function)();
	va_list arg;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format != '%')
		{
		ret += write(1, format, 1);
		format++;
		}
		if (*format == '%' && (*(format + 1)) == '%')
		{
			_putchar('%');
			format += 2;
			ret++;
		}
		if (*format == '%' && (*(format + 1)) != '%')
		{
			function = Gfunc(format);
			if (function == NULL)
			{
				_putchar(*format);
				format++;
			}
			else
			{
			ret += function(arg);
			format += 2;
			}
		}
	}
	return (ret);
}
