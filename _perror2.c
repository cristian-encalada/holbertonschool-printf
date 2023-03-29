#include "main.h"
/**
 * _perror2 - print the invalid specifier
 */
void _perror2(const char *p)
{
	_putchar('%');
	_putchar(*p);
	p++;
}
