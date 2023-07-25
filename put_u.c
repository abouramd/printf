#include "main.h"

/**
 * put_u - print a unsigned
 * @data: struct of my data
 * Return: void
 */

void put_u(t_data *data)
{
	unsigned int n = va_arg(data->p, unsigned int);

	put_base(data, n, "0123456789", 10);
}
