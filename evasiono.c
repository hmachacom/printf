#include "main.h"

/**
 * eva_siono  - evaluate if there is a special character or not.
 * @format: main chain.
 * Return: 1 if true, 0 if false.
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
