#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/*
 * file: main.h
 * author: 0xTariq-dev, Mostafa1Jamal1
 * describtion: Header file contains declarations for functions
 * 		used in the ALX printf project
 */

typedef struct format
{
	char *spec;
	int (*f)();
} format_match;

int _putchar(char c);
int print_int(va_list arg);

#endif

