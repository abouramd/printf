#include "main.h"

void put_p(t_data *data)
{
	size_t n = va_arg(data->p, unsigned long int);
	data->len += write(1, "0x", 2);
	put_base(data, n, "0123456789abcdef", 16);
}