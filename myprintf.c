#include "main.h"

/**
 * _printf - imprime parametros predefinidos
 * @format: cadena principal
 * Return: retornamos la longitud total de los parametros recibidos
 */

int _printf(const char *format, ...)	/* prototipo de la funcion principal*/
{
	int lon, cuentag = 0; /* cuentag - suma la longitud total*/
	int siono;
	va_list arg;	/* declaracion de lista arg */

	if (format == NULL)
		return (-1);
	va_start(arg, format); /* inicializacion de la lista arg*/
	lon = strlen(format) + 1;/* calcula la longitud de format*/
	siono = eva_siono(format);/* variable que recibe v(1) o f(0)*/
	if (siono)
	{
		cuentag = busca_escape(format, arg);/*llama a la funcion busca_escape*/
	}
	else
		write(1, format, lon - 1);/*se imprime cadena total si no hay %*/
	cuentag += (lon - 1) - cuenta_format(format);/*suma cadena principal -'%'*/
	va_end(arg);
	return (cuentag);
}
