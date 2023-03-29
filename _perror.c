#include "main.h"
/**
 * _perror - print an error message if invalid arguments
 */
void _perror()
{
	char *error = "Invalid specifier";
	int i;

	for (i = 0; error[i] != '\0'; i++)
	_putchar(error[i]);
}
