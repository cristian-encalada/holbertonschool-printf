#include "main.h"
/**
 * _pdefault - print the invalid specifier
 */
void _pdefault(const char *p)
{
	_putchar('%');
	_putchar(*p);
	p++;
}
