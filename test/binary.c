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
    len = _printf("Positive:[%b]\n", 123);
    len2 = printf("positive:[%b]\n", 123);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    return (0);
}
