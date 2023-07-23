#include "main.h"
/**
 * _printf - same as printf function
 * @format: a string have possible format
 * Return: number of bytes printed
 * or -1 on Error
*/

int _printf(const char *format, ...)
{
	int ret = 0, i;
	spec_f spec_arr[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'%', print_char},
		{'\0', NULL}
	};
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format != '%')
		{
		ret += write(1, format, 1);
		format++;
		}
		if (*format == '%')
		{
			i = 0;
			format++;
			while (*format != (spec_arr + i)->spec && (spec_arr + i)->spec != '\0')
				i++;
			if ((spec_arr + i)->spec == '\0')
				return (-1);
			ret += (spec_arr + i)->f(arg);
			format++;
		}
	}
	return (ret);
}
