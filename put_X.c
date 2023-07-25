#include "main.h"

void put_X(t_data *data)
{
	unsigned int n = va_arg(data->p, unsigned int);
	if (data->hash && n)
		data->len += write(1, "0x", 2);
	put_base(data, n, "0123456789ABCDEF", 16);
}
