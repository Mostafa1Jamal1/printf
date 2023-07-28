#ifndef MAIN_H
#define MAIN_H

#define NULL_STRING "(null)"

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - struct to hold different format specifier.
 * @spec: The list of specifier.
 * @f: function pointer to select the function to use pased on spec value.
 */
typedef struct format
{
	char spec;
	int (*f)();
} spec_f;

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_bin(va_list arg);
int (*Gfunc(const char *format))(va_list);
int _printf(const char *format, ...);
int print_HEX(va_list arg);
int print_hex(va_list arg);
int print_octal(va_list arg);
int print_unsigned(va_list arg);
int print_pointer(va_list arg);


#endif
