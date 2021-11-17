#include "main.h"

/**
 * evaluate_percent - print format %s
 * @a: unused param
 * Return: returns the length of the arguments
 */
int evaluate_percent(va_list __attribute__((unused))a)
{
	_putchar('%');
	return (0);
}

/**
 * evaluate_b - print format %b
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_b(va_list args)
{
	unsigned int b = va_arg(args, unsigned int), rest = 0, c;
	int i, cuenta = 0;
	int *arrayb;

	if (b == 0)
	{
		_putchar(48);
		return (1);
	}
	c = b;
	while (c > 0)
	{
		c = c / 2;
		cuenta++;
	}
	arrayb = malloc(sizeof(int) * cuenta);
	if (arrayb == NULL)
		return (0);
	for (i = 0; i < cuenta; i++)
	{
		rest = b % 2;
		b = b / 2;
		arrayb[i] = rest;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar('0' + arrayb[i]);
		i--;
	}
	free(arrayb);
	return (cuenta);
}
