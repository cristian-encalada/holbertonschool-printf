#include "main.h"
/**
 * _strlen - check the length of the string
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}
