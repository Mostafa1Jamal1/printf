#ifndef MAIN_H
#define MAIN_H

#define NULL_STRING "(null)"

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * file: main.h
 * author: 0xTariq-dev, Mostafa1Jamal1
 * describtion: Header file contains declarations for functions
 * 		used in the ALX printf project
 */

/**
 * struct format - struct to hold different format specifier.
 * @spec: The list of specifier.
 * @f: function pointer to select the function to use pased on spec value.
 */
typedef struct format
{
	char *spec;
	int (*f)();
} format_match;

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list arg);

#endif

