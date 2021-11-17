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
 * evaluate_x - print format %x
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
