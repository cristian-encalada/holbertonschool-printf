#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void _pchar(va_list args);
void _ppercent(void);
void _perror();
void _perror2(const char *p);
int _printf(const char *format, ...);

#endif /* _MAIN_H_ */
