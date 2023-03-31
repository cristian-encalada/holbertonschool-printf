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
int _print_char(va_list args);
int _print_percent(void);
int _print_default(const char *p);
int _print_string(va_list args);
int _print_int(va_list args);
int _printf(const char *format, ...);

#endif /* _MAIN_H_ */
