#include "main.h"
/**
 * _perror - print an error message if invalid arguments
 * @args: list of arguments to be printed
 */
void _perror(void)
{
	char *error= "Invalid specifier";
	int i;

	for(i = 0; error[i] != '\0'; i++)
	_putchar(error[i]);
}
