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
/**
 * evaluate_u - print format %u
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_u(va_list args)
{
	int n = 0, true_false2 = 0, ret = 0;
	unsigned int _int = va_arg(args, unsigned int);
	int i, inter, div = 1, *arrayn;

	int long divlar = 1;

	n = laps_u(_int);
	arrayn = malloc(sizeof(int) * n);
	if (arrayn == NULL)
		return (0);
	if (n < 10)
	{
		for (i = 0; i < n; i++)
			div = div * 10;
		for (i = 0; i < n; i++)
		{
			inter = _int / (div / 10);
			arrayn[i] = inter;
			_int = _int % (div / 10);
			div = div / 10;
			_putchar('0' + arrayn[i]);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
			divlar = divlar * 10;
		for (i = 0; i < n; i++)
		{
			inter = _int / (divlar / 10);
			arrayn[i] = inter;
			_int = _int % (divlar / 10);
			divlar = divlar / 10;
			if (i == n - 1 && true_false2 == 1)
				arrayn[i] = arrayn[i] + 1;
			_putchar('0' + arrayn[i]);
		}
	}
	return (n + ret);
}
/**
 * laps_u - count digits of intger
 * @_int: integer to evaluate
 * Return: returns laps of the integer
 */
int laps_u(unsigned int _int)
{
	if (_int < 10)
		return (1);
	else
		return (1 + laps(_int / 10));
}
/**
 * evaluate_o - print format %o
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_o(va_list args)
{
	unsigned int oct = va_arg(args, unsigned int);
	unsigned int *arrayn, n, i = 0;
	int j = 0, rest = 0, resd = 0, cos = 0, k = 0;

	n = laps_u(oct);
	arrayn = malloc(sizeof(int) * n + 1);
	if (arrayn == NULL)
		return (0);
	while (i < n + 1)
	{
		cos = oct / 8;
		rest = cos * 8;
		resd = oct - rest;
		arrayn[i] = resd;
		oct = cos;
		i++;
	}
	k = i - 1;
	while (k >= 0)
	{
		_putchar('0' + arrayn[k]);
		k--;
		j++;
	}
	free(arrayn);
	return (j);
}
