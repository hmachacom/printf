# _printf <blockquote class="imgur-embed-pub" lang="en" data-id="a/QAVgYYA" ><a href="//imgur.com/a/QAVgYYA">printf</a></blockquote><script async src="//s.imgur.com/min/embed.js" charset="utf-8"></script> 

Project description

The next project is about developing a function that recreates the operation of the standard library printf, so that it prints strings with the requested formats.


## Files

| Filename | Description |
| -------- | ----------- |
| `myprintf.c` | contains the call to the `_printf`function, which in turn calls the rest of the functions for the program to work. |
| `evasiono.c` | It contains the function `eva_siono` which receives the string and evaluates whether the character% is there or not. |
| `_busca_escape.c` | contains the function `busca_escape` which compares the received character to pass a specific format to the string. |
| `cuenta_format.c` | It contains the function `cuenta_forma` which is responsible for returning the number of characters in our string minus the format characters. |
| `_putchar.c` | contains the function `_putchar` that prints a character. |
| `funtions.c` | contain the functions for printing strings, characters and integers of% d and% i. |
| `main.h` | There are all the prototypes of the functions and the libraries that we need for our `_printf` command. |

**created by Jhon Gonzalez, Reinaldo Castro and Hugo Machacon for Holberton.**