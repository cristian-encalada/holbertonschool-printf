#include "main.h"
/**
 * _pchar - print a char using _putchar
 * @args: list of arguments to be printed
 */
void _pstring(va_list args)
{
	char *str;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "error";
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
