#include "main.h"

/**
 * busca_escape - busca la condicion del formato, la evalua e imprime.
 * @format: cadena principal
 * @args: lista de argumentos recibidos
 * Return: retorna la longitud de os argumentos
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
				lonc = strlen(cadenas) + 1;
				cuenta = cuenta + (lonc - 1);/* sumando los caracteres de la cadena*/
				write(1, cadenas, lonc);
				i++;
				break;
			case 'c':
				caracteres = va_arg(args, int);
				_putchar(caracteres);
				cuenta++;
				i++;
				break;
			default:
				_putchar(format[i]);
				continue;
			}
		}
		else
			_putchar(format[i]);
	}
	return (cuenta);
}
