#include "main.h"

/**
 * put_r - print a rev string
 * @data: struct of my data
 * Return: void
 */

void put_r(t_data *data)
{
	unsigned int i = 0;
	char *s = va_arg(data->p, char *);

	if (!s)
		data->len += write(1, "(null)", 6);
	else
	{
		while (s[i])
			i++;
		while (i-- > 0)
			data->len += write(1, &s[i], 1);
	}
}
