#include "main.h"
/**
 * _pint - print integer or decimal values using _putchar
 * @args: list of arguments to be printed
  * Return: Length of the string
 */
int _pint(va_list args)
{
	int len, num;

	num = va_arg(args, int);
	len = _intlen(num);
	_putchar(num - 45);

	return (len);
}
