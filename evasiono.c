#include "main.h"

/**
 * eva_siono  - evalua si hay un caracter especial o no
 * @format: cadena principal
 * Return: 1 si es verdadero, 0 si es falso.
 */
int eva_siono(const char *format)
{
	int lon, i;

	lon = strlen(format) + 1;
	for (i = 0; i < lon; i++)
	{
		if (format[i] == '%')
		{
			return (1);
		}
	}
	return (0);
}
