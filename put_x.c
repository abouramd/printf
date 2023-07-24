#include "main.h"

void put_x(t_data *data)
{
	size_t n = va_arg(data->p, size_t);
	put_base(data, n, "0123456789abcdef", 16);
}