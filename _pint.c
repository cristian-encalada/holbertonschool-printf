#include "main.h"
/**
 * _pint - print integer or decimal values using _putchar
 * @args: list of arguments to be printed
  * Return: Length of the number
 */
int _pint(va_list args)
{
	long num, div = 1, len;

	num = va_arg(args, int);
	len = _intlen(num);
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	/* Find the max divisor */
	while (num / div >= 10)
		div *= 10;

	while (div != 0)
	{
		_putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}
	return (len);
}
