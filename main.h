#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct escape - Struct escape
 *
 * @es: format
 * @f: The function associated
 */
typedef struct escape
{
	char es;
	int (*f)(va_list);
} bu_es;

int _printf(const char *format, ...);
int eva_siono(const char *format);
int busca_escape(const char *format, va_list args);
int _putchar(char c);
int cuenta_format(const char *format);
int evaluate_str(va_list args);
int evaluate_char(va_list args);
int evaluate_intd(va_list args);
int laps(int _int);
void case_i_d(int laps_, int _int, int true_false2);
int evaluate_percent(va_list __attribute__((unused))a);
int (*select_format(char s))(va_list);
int evaluate_b(va_list args);
int evaluate_u(va_list args);
int laps_u(unsigned _int);
int evaluate_o(va_list args);

#endif /* MAIN_H */
