#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string (0 or more directives)
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
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
					_pchar(args);
					break;
				case '%':
					_ppercent();
					break;
				case 's':
					_pstring(args);
					break;
				default:
					_pdefault(p);
					break;
			}
		p++;	/* check next character */
		}
		else
		{
			_putchar(*p); /* Print non % or specifier chars */
			p++;
		}
	}
	va_end(args); /* Clean up */
	return (len);
}
