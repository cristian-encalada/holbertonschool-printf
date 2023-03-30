#include "main.h"
/**
 * _intlen - check the length of an integer
 * @n: input integer
 * Return: integer length
 */
int _intlen(int n)
{
	int len;

	if (n <= 0)
		len = 1; /* Negatives or 0 values */
	else
		len = 0; /* Positive values */

	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
