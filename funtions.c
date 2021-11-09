#include "main.h"

/**
 * evaluate_str - print format %s
 * @str: string to print
 * Return: returns the length of the arguments
 */
int evaluate_str(char *str)
{
	char *cadenas;
	int lonc = 0, cuenta = 0;

	cadenas = str;
	if (!cadenas)
		cadenas = "(null)";
	lonc = strlen(cadenas) + 1;
	cuenta = cuenta + (lonc - 1);
	write(1, cadenas, lonc - 1);
	return (cuenta);
}
/**
 * evaluate_char - print format %c
 * @_char: char to print
 * Return: returns the length of the arguments
 */
int evaluate_char(int _char)
{
	_putchar(_char);
	return (1);
}
/**
 * evaluate_intd - print format %d
 * @_int: char to print
 * Return: returns the length of the arguments
 */
int evaluate_intd(int _int)
{
	int n, i, inter, div = 1, true_false = 0, true_false2 = 0, ret = 0;
	int long divlar = 1;
	int *arrayn;

	if (_int < 0)
	{
		if (_int == INT_MIN)
		{
			_int = _int + 1;
			true_false2 = 1;
		}
		_int = _int * -1;
		true_false = 1;
	}
	n = laps(_int);
	arrayn = malloc(sizeof(int) * n);
	if (arrayn == NULL)
		return (-1);
	if (true_false == 1)
	{
		ret--;
		_putchar('-');
	}

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
 * laps - count digits of intger
 * @_int: integer to evaluate
 * Return: returns laps of the integer
 */
int laps(int _int)
{
	if (_int < 10)
		return (1);
	else
		return (1 + laps(_int / 10));
}
/**
 * laps - count digits of intger
 * @_int: integer to evaluate
 * Return: returns laps of the integer
 */