#include "main.h"
/**
 * _print_string - print a string using _putchar
 * @args: list of arguments to be printed
 * Return: Length of the string
 */
int _print_string(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = -1;
	}
	len = _strlen(str);
	while (*str != '\0' && str != NULL)
	{
		_putchar(*str);
		str++;
	}
	return (len);
}
