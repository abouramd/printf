#include "main.h"

/**
 * put_base - print a char
 * @data: struct of my data
 * @n: the number
 * @strbase: string of the base
 * @base: the base
 * Return: void
 */

void put_base(t_data *data, long n, char *strbase, int base)
{
	if (n < 0)
	{
		data->len += write(1, "-", 1);
		n *= -1;
	}
	if (n >= base)
		put_base(data, n / base, strbase, base);
	data->len += write(1, &strbase[n % base], 1);
}
