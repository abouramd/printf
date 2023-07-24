#include "main.h"

void put_X(t_data *data)
{
	size_t n = va_arg(data->p, size_t);
	put_base(data, n, "0123456789ABCDEF", 16);
}