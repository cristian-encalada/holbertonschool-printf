# C - Printf Project
> Repository created to work on Printf Project - C programming Language <br>
Holberton Dev Bootcamp - Montevideo 2023

## Description

- This is a basic C replica of the standard C function ``printf`` that produces output according to a format string. <br>
- The implementation was done using variadic functions and multiple auxiliar functions.
- The function takes in a format string as its first argument, followed by zero or more additional arguments depending on the format string.

## Prototype

    ``int _printf(const char *format, ...);``

## Return Values

- Return: Number of characters printed (excluding the null byte used to end output to strings).
- Return (-1) for negative cases or invalid inputs.

### Function Parameters
*format: A string containing zero or more directives for how the output should be formatted. This is a mandatory parameter.
...: Zero or more additional arguments, depending on the format string. These are optional parameters and their presence is determined by the format string.

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

> The _printf function relies on the following additional functions:

    _strlen: Returns the length of a string.
    _putchar: Writes a single character to the standard output stream.
    _intlen: Returns the number of digits in an integer.
    _print_char: Prints a single character.
    _print_percent: Prints a literal % character.
    _print_default: Handles unknown format specifiers.
    _print_string: Prints a string.
    _print_int: Prints a signed integer.
    
### Authors
Felipe Pereira Forte & Cristian Encalada
