#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /* Normal Cases */
    len = _printf("Positive:[%d]\n", 762534);
    len2 = printf("positive:[%d]\n", 762534);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n", len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n", len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    /* Normal Edge Cases */
    len = _printf("INT_MIN:[%d]\n", INT_MIN);
    len2 = printf("INT_MIN:[%d]\n", INT_MIN);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("zero:[%d]\n", 0);
    len2 = printf("zero:[%d]\n", 0);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("INT_MAX:[%d]\n", INT_MAX);
    len2 = printf("INT_MAX:[%d]\n", INT_MAX);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    /* Passing in Other Bases */
    len = _printf("oct(42):[%d]\n", 052);
    len2 = printf("oct(42):[%d]\n", 052);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("hex(42):[%d]\n", 0x2a);
    len2 = printf("hex(42):[%d]\n", 0x2a);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    /* Other types passed */
    len = _printf("NULL:[%d]\n", NULL);
    len2 = printf("NULL:[%d]\n", NULL);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("char:[%d]\n", 'a');
    len2 = printf("char:[%d]\n", 'a');
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("float:[%d]\n", 12.0558);
    len2 = printf("float:[%d]\n", 12.0558);
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("str:[%d]\n", "nothing important");
    len2 = printf("str:[%d]\n", "nothing important");
    _printf("Length:[%d]\n",len);
    _printf("Length:[%d]\n",len2);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    return (0);
}

