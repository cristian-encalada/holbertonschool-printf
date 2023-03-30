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
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
/*	_printf("%s, %s", "Hello", NULL); 
	printf("%s, %s", "Hello", NULL); */
/*	_printf("%s", NULL); */
	_printf("%s \n", NULL);
	printf("%s \n", NULL);
	_printf("%s, %s \n", "Test", NULL);
	printf("%s, %s \n", "Test", NULL);
	_printf("");
	printf("");
	_printf("qwertyuopadghjklzxvbnm");
	printf("qwertyuopadghjklzxvbnm");
    return (0);
}
