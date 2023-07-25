#include "main.h"
/**
 * Gfunc - get the requried function to operate
 * @format: pointer to char of the format
 * Return: function pointer of the required function
 * or NULL if no format matching.
*/
int (*Gfunc(const char *format))(va_list)
{
	int i = 0;
	spec_f spec_arr[] = {{'c', print_char}, {'s', print_str},
		{'d', print_int}, {'i', print_int}, {'%', print_char},
		{'b', print_bin}, {'\0', NULL}};

	format++;
	while (*format != (spec_arr + i)->spec
				&& (spec_arr + i)->spec != '\0')
		i++;
	if ((spec_arr + i)->spec == '\0')
		return (NULL);
	else
		return (spec_arr[i].f);
}
