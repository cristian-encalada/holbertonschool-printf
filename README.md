# C - Printf Project
> Repository created to work on Printf Project - C programming Language <br>
Holberton Dev Bootcamp - Montevideo 2023

## Description

- This project is a basic C replica of the standard C function ``printf`` that produces output according to a format string. <br>
- The implementation was done using ``variadic functions``, ``switch statement`` and multiple auxiliar functions.
- The function takes in a ``format string`` as its first argument, followed by zero or more additional arguments depending on the format string.

## Prototype

``int _printf(const char *format, ...);``

**Return Values**<br>

- Return: Number of characters printed (excluding the null byte used to end output to strings).
- For negative cases or invalid inputs Return ``(-1)``

**Function Parameters**<br>

- *format: A string containing zero or more directives for how the output should be formatted. This is a mandatory parameter.
- ...: Zero or more additional arguments, depending on the format string. These are optional parameters and their presence is determined by the format string.

## Supported Format Specifiers

> The following format specifiers are supported by the _printf function:

- %c: Prints a single character.
- %s: Prints a string.
- %d or %i: Prints a signed integer.
- %%: Prints a literal % character.
   
## Non-supported Format specifiers (out of the scope)

- %u: Prints an unsigned integer.(did not do advanced)
- %o: Prints an octal integer.(did not do advanced)
- %x or %X: Prints a hexadecimal integer.(did not do advanced)

## Additional Functions

The _printf function relies on the following additional functions: <br>

- [_strlen](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_strlen.c): Returns the length of a string.
- [_putchar](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_putchar.c): Writes a single character to the standard output stream.
- [_intlen](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_intlen.c): Returns the number of digits in an integer.
- [_print_char](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_print_char.c): Prints a single character.
- [_print_percent](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_print_percent.c): Prints a literal % character.
- [_print_default](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_print_default.c): Handles unknown format specifiers.
- [_print_string](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_print_string.c): Prints a string.
- [_print_int](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/_print_int.c): Prints a signed integer.

## Man page

[Man page](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/man_3_printf) created for the current _printf implementation. <br>
To execute it, run the command:
```
man ./man_3_printf
```
**Man page output:**<br>
![man page _printf](/img/man_printf.jpg)
### Authors
Felipe Pereira Forte & Cristian Encalada
