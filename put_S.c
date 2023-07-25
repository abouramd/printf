#include "main.h"

/**
 * put_S - print a string
 * @data: struct of my data
 * Return: void
 */

void put_S(t_data *data)
{
	unsigned char *s = va_arg(data->p, unsigned char *);

	if (!s)
		data->len += write(1, "(null)", 6);
	else
	{
		while (*s)
		{
			if (*s < 127 && *s >= 32)
				data->len += write(1, s, 1);
			else
			{
				data->len += write(1, "\\x", 2);
				put_base(data, *s, "0123456789ABCDEF", 16);
			}
			s++;
		}
	}
}
