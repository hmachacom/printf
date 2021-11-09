#include "main.h"

/**
 * cuenta_format - increases every time it finds a %.
 * @format: main chain
 * Return: returns the amount of % found.
 */
int cuenta_format(const char *format)
{
	int lon, i, cuentafor = 0;

	lon = strlen(format) + 1;
	for (i = 0; i < lon; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			cuentafor++;
		}
		else if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'c' ||
									  format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			cuentafor += 2;
		}
	}
	return (cuentafor);
}
