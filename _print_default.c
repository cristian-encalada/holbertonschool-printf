#include "main.h"
/**
 * _print_default - print normal string
 * @p: pointer to the start of the string
 * Return: String length
 */
int _print_default(const char *p)
{
	int len = 2; /* include the first % */

	_putchar(*(p - 1));
	_putchar(*p);
	return (len);
}
