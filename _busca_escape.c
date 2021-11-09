#include "main.h"

/**
 * busca_escape - look for the condition of the format.
 * @format: main chain
 * @args: list of received arguments
 * Return: returns the length of the arguments
 */
int busca_escape(const char *format, va_list args)
{
	int lon, i, lonc, caracteres, cuenta = 0;
	char *cadenas;

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
				cadenas = va_arg(args, char *);
				if (!cadenas)
					cadenas = "(null)";
				lonc = strlen(cadenas) + 1;
				cuenta = cuenta + (lonc - 1);
				write(1, cadenas, lonc - 1);
				i++;
				break;
			case 'c':
				caracteres = va_arg(args, int);
				_putchar(caracteres);
				cuenta++;
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
