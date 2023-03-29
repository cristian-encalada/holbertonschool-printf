#include "main.h"
/**
 * _pstring - print a string using _putchar
 * @args: list of arguments to be printed
 * Return: Length of the string
 */
int _pstring(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	len = _strlen(str);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (len);
}
