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
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("Unknown:[%r]\n");
    len2 = printf("Unknown:[%r]\n");
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("%r");
    printf("\n");
    len2 = printf("%r");
    printf("\n");
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("% Y\n");
    len2 = printf("% Y\n");
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    printf("*******************************\n");
    len = _printf("%s\n", NULL);
    len2 = printf("%s\n", NULL);
    printf("Length:[%d]\n",len);
    printf("Length:[%d]\n", len2);
    return (0);
}
