#include "main.h"

/**
 * put_p - print the addr
 * @data: struct of my data
 * Return: void
 */

void put_p(t_data *data)
{
	unsigned long n = va_arg(data->p, unsigned long);

	data->len += write(1, "0x", 2);
	put_ubase(data, n, "0123456789abcdef", 16);
}
