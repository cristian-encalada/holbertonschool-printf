#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void _pchar(va_list args);
void _ppercent(void);
void _pdefault(const char *p);
int _printf(const char *format, ...);
void _pstring(va_list args);

#endif /* _MAIN_H_ */
