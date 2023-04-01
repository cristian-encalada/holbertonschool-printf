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

**Compilation**:
The source code was compiled using this command:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
Where the flag -Wno-format is set for unknown format specifiers.

## Supported Format Specifiers

The following format specifiers are supported by the _printf function:

| Format Specifier | Description |
| --- | --- |
| %c | Prints a single character |
| %s | Prints a string |
| %% | Prints a percent character |
| %d | Prints a signed integer |
| %i | Prints a signed integer|

## Non-supported Format specifiers (out of the scope)

| Format Specifier | Description |
| --- | --- |
| %u | Prints an unsigned integer |
| %o | Prints an octal integer |
| %x | Prints a hexadecimal integer |

## Additional Functions

The _printf function relies on the following additional functions: <br>

| Function | Description |
| --- | --- | 
| [_strlen](/_strlen.c) | Returns the length of a string. |
| [_putchar](/_putchar.c) | Writes a single character to the standard output stream. |
| [_intlen](/_intlen.c) | Returns the number of digits in an integer. |
| [_print_char](/_print_char.c) | Prints a single character. |
| [_print_percent](/_print_percent.c) | Prints a literal % character. |
| [_print_default](/_print_default.c) | Handles unknown format specifiers. |
| [_print_string](/_print_string.c) | Prints a string. |
| [_print_int](/_print_int.c) | Prints a signed integer. |

## Testing

- The functional testing was performed using the following file created and shared among C20 peers.

Here is a sample of the first three tests:

```
int main(void)
{
	int a, b, cont = 0;
	BLUE;
	printf("\nTEST WITHOUT ARGUMENTS:\n\n");
	RESET;
	printf("Test 1");
	printf("\nexpected: ");
	a = printf("Simple string testing");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("Simple string testing");
	cont = cont + output(a,b);
	printf("\n---------------\n");
	printf("Test 2");
	printf("\nexpected: ");
	a = printf(" ");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf(" ");
	cont = cont + output(a,b);
	printf("\n---------------\n");
	printf("Test 3");
	printf("\nexpected: ");
	a = printf("");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("");
	cont = cont + output(a,b);
	printf("\n---------------\n");
```
To review the complete test collection (30 tests) check the file [main.c](/test/main.c)

**Test Output**

Here is a sample of the output of the first three tests:

```
TEST WITHOUT ARGUMENTS:

 [0mTest 1
expected: Simple string testing
obtained: Simple string testing
 [0;32mSuccess: 21 chars printed. [0m
---------------
Test 2
expected:  
obtained:  
 [0;32mSuccess: 1 chars printed. [0m
---------------
Test 3
expected: 
obtained: 
 [0;32mSuccess: 0 chars printed. [0m
---------------
```

To review the complete test output (30 tests) check the file [tests_output](/test/tests_output)

## Flowchart

Here is our Flowchart created to understand our _printf code.

Simplified one:

![flowchart_printf](/img/printf.PNG)

Specific one:

![flowchart_printf](/img/printf specfinal.png)

## Man page

[Man page](https://github.com/cristian-encalada/holbertonschool-printf/blob/master/man_3_printf) created for the current _printf implementation. <br>
To execute it, run the command:
```
man ./man_3_printf
```
**Man page output:**<br>
![man_page _printf](/img/man_printf.jpg)

### Authors

Felipe Pereira Forte & Cristian Encalada
