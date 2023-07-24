#include "main.h"

void put_o(t_data *data)
{
	unsigned int n = va_arg(data->p, unsigned int);
	put_base(data, n, "01234567", 8);
}