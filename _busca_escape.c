#include "main.h"

/**
 * busca_escape - look for the condition of the format.
 * @format: main chain
 * @args: list of received arguments
 * Return: returns the length of the arguments
 */
int busca_escape(const char *format, va_list args)
{
	int lon, i, cuenta = 0, cuenta1;
	char letter;

	lon = strlen(format) + 1;
	for (i = 0; i < lon - 1; i++)
	{
		if (format[i] == '%')
		{
			cuenta1 = 0;
			if (format[i + 1] != '%' && format[i + 1])
			{
				letter = format[i + 1];
				cuenta1 = select_format(letter)(args);
				cuenta = cuenta + cuenta1;
				if (cuenta1 == 0 && letter != 's' && letter != 'c' &&
					letter != 'd' && letter != 'i' && letter != 'b' &&
					letter != 'u' && letter != 'o' && letter != 'x' &&
					letter != 'X')
					_putchar(letter);
				i++;
			}
			else if ((format[i + 1] != '%' && !format[i + 1]))
			{
				if (cuenta == 0)
					return (-1);
			}
			else if (format[i + 1] == '%')
			{
				_putchar(format[i]);
				i++;
			}
		}
		else
			_putchar(format[i]);
	}
	return (cuenta);
}
/**
 * select_format - search simbol
 * @f: char recivide
 * Return: returns the length of the arguments
 */
int (*select_format(char f))(va_list)
{
	bu_es esc[] = {
		{'s', evaluate_str},
		{'c', evaluate_char},
		{'d', evaluate_intd},
		{'i', evaluate_intd},
		{'b', evaluate_b},
		{'u', evaluate_intd},
		{'o', evaluate_intd},
		{'x', evaluate_intd},
		{'X', evaluate_intd},
	};
	int j = 0;

	while (j < 9)
	{
		if (esc[j].es == f)
		{
			return (esc[j].f);
			j++;
		}
		j++;
	}
	return (evaluate_percent);
}
