#include "main.h"

/**
 * put_ubase - print a char
 * @data: struct of my data
 * @n: the number
 * @strbase: string of the base
 * @base: the base
 * Return: void
 */

void put_ubase(t_data *data, unsigned long n, char *strbase,
unsigned long base)
{
	if (n >= base)
		put_ubase(data, n / base, strbase, base);
	data->len += write(1, &strbase[n % base], 1);
}
