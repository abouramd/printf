#include "main.h"

void put_x(t_data *data)
{
	unsigned int n = va_arg(data->p, unsigned int);
	put_base(data, n, "0123456789abcdef", 16);
}
