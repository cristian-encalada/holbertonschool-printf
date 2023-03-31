#include "main.h"
/**
 * _pdefault - print normal string
 * @p: pointer to the start of the string
 * Return: String length
 */
int _pdefault(const char *p)
{
	int len = 2; /* include the first % */

	_putchar(*(p - 1));
	_putchar(*p);
	return (len);
}
