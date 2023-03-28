#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string (0 or more directives)
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, c;
	const char *p = format; /* aux ptr */

	va_start(args, format);	/* Initialize the argument list */
	while (format != NULL && *p != '\0')
	{
		if (*p == '%')
		{
			p++;	/* check format specifier */
			switch (*p)
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					len += 1;
					break;
				default:
					_putchar('E');
					break;
			}
		p++;	/* check next character */
		}
		else
		{
			_putchar('x');
			p++;
		}
	}
	_putchar('\n');
	va_end(args); /* Clean up */
	return (len);
}
