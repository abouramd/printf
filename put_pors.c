#include "main.h"

/**
 * put_pors - print a char
 * @data: struct of my data
 * Return: void
 */

void put_pors(t_data *data)
{
	data->len += write(1, "%", 1);
}
