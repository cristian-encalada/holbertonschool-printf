#include "main.h"
/**
 * _strlen - check the length of the string
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	if (s != NULL)
		for (; s[len]; len++)
			;
	else
		len = -1;
	return (len);
}
