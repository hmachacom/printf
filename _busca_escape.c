#include "main.h"

/**
 * busca_escape - look for the condition of the format.
 * @format: main chain
 * @args: list of received arguments
 * Return: returns the length of the arguments
 */
int busca_escape(const char *format, va_list args)
{
	int lon, i, cuenta = 0;

	lon = strlen(format) + 1;
	for (i = 0; i < lon - 1; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case '%':
				_putchar(format[i]);
				i++;
				break;
			case 's':
				cuenta += evaluate_str(va_arg(args, char *));
				i++;
				break;
			case 'c':
				cuenta += evaluate_char(va_arg(args, int));
				i++;
				break;
			case 'd':
				cuenta += evaluate_intd(va_arg(args, int));
				i++;
				break;
			case 'i':
				cuenta += evaluate_intd(va_arg(args, int));
				i++;
				break;
			default:
				if (format[i + 1])
					_putchar(format[i]);
				else
					return (-1);
			}
		}
		else
			_putchar(format[i]);
	}
	return (cuenta);
}
