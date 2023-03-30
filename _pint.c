#include "main.h"
/**
 * _pint - print integer or decimal values using _putchar
 * @args: list of arguments to be printed
  * Return: Length of the string
 */
void _pint(va_list args)
{
	int num;
	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

         while (num > 0)
	{
		_putchar((num % 10) + '0');
		num /= 10;
	}
}
