#include "main.h"
/**
 * Gfunc - 
 * @format: 
 * Return:
*/
int (*Gfunc(const char *format))(va_list)
{
	int i = 0;
	spec_f spec_arr[] = {{'c', print_char}, {'s', print_str},
		{'d', print_int}, {'i', print_int}, {'%', print_char},
		{'\0', NULL}};

	format++;
	while (*format != (spec_arr + i)->spec 
				&& (spec_arr + i)->spec != '\0')
		i++;
	if ((spec_arr + i)->spec == '\0')
		return (NULL);
	else
		return (spec_arr[i].f);
}
