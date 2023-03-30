#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/* auxiliar functions */
int _strlen(char *s);
int _putchar(char c);
int _intlen(int n);
/* printing functions */
int _pchar(va_list args);
int _ppercent(void);
void _pdefault(const char *p);
int _pstring(va_list args);
int _pint(va_list args);
int _printf(const char *format, ...);

#endif /* _MAIN_H_ */
