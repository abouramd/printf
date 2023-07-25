#include "main.h"

/**
 * put_b - print a bin
 * @data: struct of my data
 * Return: void
 */

void put_b(t_data *data)
{
	unsigned int n = va_arg(data->p, unsigned int);

	put_base(data, n, "01", 2);
}
