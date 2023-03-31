#include "main.h"
/**
 * _print_char - print a char using _putchar
 * @args: list of arguments to be printed
 * Return: length = 1
 */
int _print_char(va_list args)
{
	int c, len = 1;

	c = va_arg(args, int);
	_putchar(c);
	return (len);
}
