#include "main.h"

void put_b(t_data *data)
{
	unsigned int n = va_arg(data->p, int);
	put_base(data, n, "01", 2);
}