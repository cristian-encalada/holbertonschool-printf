#include "main.h"
/**
 * _strlen - check the length of the string
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
