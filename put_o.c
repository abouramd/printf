#include "main.h"

/**
 * put_o - print a char
 * @data: struct of my data
 * Return: void
 */

void put_o(t_data *data)
{
	unsigned int n = va_arg(data->p, unsigned int);

	put_base(data, n, "01234567", 8);
}
