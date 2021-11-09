#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int eva_siono(const char *format);
int busca_escape(const char *format, va_list args);
int _putchar(char c);
int cuenta_format(const char *format);
int evaluate_str(char *str);
int evaluate_char(int _char);
int evaluate_intd(int _int);
int laps(int _int);

#endif /* MAIN_H */
