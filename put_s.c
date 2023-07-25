#include "main.h"

/**
 * put_s - print a string
 * @data: struct of my data
 * Return: void
 */

void put_s(t_data *data)
{
	char *s = va_arg(data->p, char *);

	if (!s)
		data->len += write(1, "(null)", 6);
	else
	{
		while (*s)
			data->len += write(1, s++, 1);
	}
}
