#include "main.h"

/**
 * put_c - print a char
 * @data: struct of my data
 * Return: void
 */

void put_s(t_data *data)
{
	int i = 0;
    char *s = va_arg(data->p, char *);

    if (!s)
        data->len += write(1, "(null)", 6);
    else
    {
        while (s[i])
            data->len += write(1, &s[i++], 1);
    }
}
