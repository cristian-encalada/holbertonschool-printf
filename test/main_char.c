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
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", NULL);
	printf("Character:[%c]\n", NULL);
	_printf("Character:%c, Hello %c\n", 'C', 'E');
	printf("Character:%c, Hello %c\n", 'C', 'E');
	_printf("Character:%c\n", 8);
	printf("Character:%c\n", 8);
	_printf(NULL);
	printf(NULL);
	_printf("Character:%c\n", "HELLO"); 
	printf("Character:%c\n", "HELLO"); 
    return (0);
}
