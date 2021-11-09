# _printf

Project description

The next project is about developing a function that recreates the operation of the standard library printf, so that it prints strings with the requested formats.


## Files

| Filename | Description |
| -------- | ----------- |
| `myprintf.c` | contains the call to the `_printf`function, which in turn calls the rest of the functions for the program to work. |
| `evasiono.c` | It contains the function `eva_siono` which receives the string and evaluates whether the character% is there or not. |
| `_busca_escape.c` | contains the function `busca_escape` which compares the received character to pass a specific format to the string |
| `cuenta_format.c` | It contains the function `cuenta_forma` which is responsible for returning the number of characters in our string minus the format characters. |
| `_putchar.c` | contains the function `_putchar` that prints a character. |

created by Jhon Gonzalez, Reinaldo Castro and Hugo Machacon for Holberton.