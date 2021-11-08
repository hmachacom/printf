#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int eva_siono (const char *format);
int busca_escape(const char *format, va_list args);
int _putchar(char c);
int cuenta_format(const char *format);

#endif /* MAIN_H */
