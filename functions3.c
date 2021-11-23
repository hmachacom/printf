#include "main.h"

/**
 * evaluate_x - print format %x
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_x(va_list args)
{
	unsigned int hex = va_arg(args, unsigned int), *arrayn, n, i = 0;
	int j = 0, rest = 0, cos = 0, k = 0, l;
	char letter;

	n = laps_u(hex);
	arrayn = malloc(sizeof(int) * n + 1);
	if (arrayn == NULL)
		return (0);
	if (hex == 0)
	{
		_putchar(48);
		free(arrayn);
		return (1);
	}
	while (hex > 0)
	{
		cos = hex / 16;
		rest = hex % 16;
		arrayn[i] = rest;
		hex = cos;
		i++;
	}
	k = i - 1;
	while (k >= 0)
	{
		if (arrayn[k] >= 10)
		{
			rest = arrayn[k] - 10;
			letter = 'a';
			for (l = 0; l < rest; l++)
				letter++;
			_putchar(letter);
		}
		else
			_putchar('0' + arrayn[k]);
		k--;
		j++;
	}
	free(arrayn);
	return (j);
}
/**
 * evaluate_X - print format %X
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_X(va_list args)
{
	unsigned int hex = va_arg(args, unsigned int), *arrayn, n, i = 0;
	int j = 0, rest = 0, cos = 0, k = 0, l;
	char letter;

	n = laps_u(hex);
	arrayn = malloc(sizeof(int) * n + 1);
	if (arrayn == NULL)
		return (0);
	if (hex == 0)
	{
		_putchar(48);
		free(arrayn);
		return (1);
	}
	while (hex > 0)
	{
		cos = hex / 16;
		rest = hex % 16;
		arrayn[i] = rest;
		hex = cos;
		i++;
	}
	k = i - 1;
	while (k >= 0)
	{
		if (arrayn[k] >= 10)
		{
			rest = arrayn[k] - 10;
			letter = 'A';
			for (l = 0; l < rest; l++)
				letter++;
			_putchar(letter);
		}
		else
			_putchar('0' + arrayn[k]);
		k--;
		j++;
	}
	free(arrayn);
	return (j);
}
/**
 * evaluate_S - print format %S
 * @args: char to print
 * Return: returns the length of the arguments
 */
int evaluate_S(va_list args)
{
	char *cadenas = va_arg(args, char *);
	int lonc = 0, cuenta = 0, i, rest = 0, l;
	char letter;

	lonc = strlen(cadenas);
	cuenta = cuenta + lonc;
	for (i = 0; cadenas[i] != '\0'; i++)
	{
		if (cadenas[i] < 32 || cadenas[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			cuenta++;
			_putchar('0');
			cuenta++;
			if (cadenas[i] >= 10)
			{
				rest = cadenas[i] - 10;
				letter = 'A';
				for (l = 0; l < rest; l++)
					letter++;
				_putchar(letter);
				cuenta++;
			}
			else
			{
				_putchar('0' + cadenas[i]);
				cuenta++;
			}
		}
		else
		{
			_putchar(cadenas[i]);
		}
	}
	return (cuenta);
}
