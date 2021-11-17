#include "main.h"

/**
 * evaluate_str - print format %s
 * @args: string to print
 * Return: returns the length of the arguments
 */
int evaluate_str(va_list args)
{
	char *cadenas = va_arg(args, char *);
	int lonc = 0, cuenta = 0;

	if (!cadenas)
		cadenas = "(null)";
	lonc = strlen(cadenas) + 1;
	cuenta = cuenta + (lonc - 1);
	write(1, cadenas, lonc - 1);
	return (cuenta);
}
/**
 * evaluate_char - print format %c
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 * evaluate_intd - print format %d
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_intd(va_list args)
{
	int n = 0, true_false = 0, true_false2 = 0, ret = 0;
	int _int = va_arg(args, int);

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
	if (true_false == 1)
	{
		ret++;
		_putchar('-');
	}
	case_i_d(n, _int, true_false2);
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
 * case_i_d - print digit of digit
 * @_int: integer to evaluate
 * @laps_: number of digits
 * @true_false2: evaluate condition
 * Return: returns laps of the integer
 */
void case_i_d(int laps_, int _int, int true_false2)
{
	int i, inter, div = 1, *arrayn;

	int long divlar = 1;

	arrayn = malloc(sizeof(int) * laps_);
	if (arrayn == NULL)
		return;
	if (laps_ < 10)
	{
		for (i = 0; i < laps_; i++)
			div = div * 10;
		for (i = 0; i < laps_; i++)
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
		for (i = 0; i < laps_; i++)
			divlar = divlar * 10;
		for (i = 0; i < laps_; i++)
		{
			inter = _int / (divlar / 10);
			arrayn[i] = inter;
			_int = _int % (divlar / 10);
			divlar = divlar / 10;
			if (i == laps_ - 1 && true_false2 == 1)
				arrayn[i] = arrayn[i] + 1;
			_putchar('0' + arrayn[i]);
		}
	}
}
