#include "main.h"
/**
 * _pchar - print a char using _putchar
 * @args: list of arguments to be printed
 */
void _pchar(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
}
