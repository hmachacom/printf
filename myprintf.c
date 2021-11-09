#include "main.h"

/**
 * _printf - print predefined parameters.
 * @format: main chain.
 * Return: we return the total length of the received parameters.
 */

int _printf(const char *format, ...)
{
	int lon, cuentag = 0;
	int siono;
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	lon = strlen(format) + 1;
	siono = eva_siono(format);
	if (siono)
	{
		cuentag = busca_escape(format, arg);
		if (cuentag == -1)
			return (-1);
	}
	else
		write(1, format, lon - 1);
	cuentag += (lon - 1) - cuenta_format(format);
	va_end(arg);
	return (cuentag);
}
