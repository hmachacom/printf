#include "main.h"

/**
 * cuenta_format - incrementa cada vez que encuentra un %
 * @format: cadena principal
 * Return: retorna la cantidad de % que se encuentra.
 */
int cuenta_format(const char *format)
{
	int lon, i, cuentafor = 0;

	lon = strlen(format);
	for (i = 0; i < lon; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			cuentafor++;
		}
		else if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'c'))
		{
			cuentafor += 2;
		}
	}
	return (cuentafor);
}
