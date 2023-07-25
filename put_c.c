#include "main.h"

/**
 * put_c - print a char
 * @data: struct of my data
 * Return: void
 */

void put_c(t_data *data)
{
	char c = va_arg(data->p, int);

	data->len += write(1, &c, 1);
}
