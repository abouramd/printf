#include "main.h"

/**
 * put_d - print a num
 * @data: struct of my data
 * Return: void
 */

void put_d(t_data *data)
{
	int n = va_arg(data->p, int);

	if (data->plus && n >= 0)
		data->len += write(1, "+", 1);
	put_base(data, n, "0123456789", 10);
}
