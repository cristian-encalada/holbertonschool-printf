# C - Printf Project
> Repository created to work on Printf Project - C programming Language <br>
Holberton Dev Bootcamp - Montevideo 2023
## Tasks Completed

## This is a C function called _printf that produces output according to a format string. The function takes in a format string as its first argument, followed by zero or more additional arguments depending on the format string.
Function Signature

    int _printf(const char *format, ...);

## Function Parameters

    format: A string containing zero or more directives for how the output should be formatted. This is a mandatory parameter.
    
    ...: Zero or more additional arguments, depending on the format string. These are optional parameters and their presence is determined by the format string.

## Return Value

The function returns the number of characters printed to the standard output stream. If an error occurs, such as an invalid format specifier, the function returns -1.
Supported Format Specifiers

> The following format specifiers are supported by the _printf function:

    %c: Prints a single character.
    %s: Prints a string.
    %d or %i: Prints a signed integer.
    %%: Prints a literal % character.
    %u: Prints an unsigned integer.(did not do advanced)
    %o: Prints an octal integer.(did not do advanced)
    %x or %X: Prints a hexadecimal integer.(did not do advanced)
   

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
    
### Written by Felipe Pereira Forte & Cristian Encalada
