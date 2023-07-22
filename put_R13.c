#include "main.h"

/**
 * put_r13 - print a rot 13
 * @data: struct of my data
 * Return: void
 */

void put_r13(t_data *data)
{
	char rot;
    char *s = va_arg(data->p, char *);

    if (!s)
        data->len += write(1, "(null)", 6);
    else
    {
        while (*s)
		{
			rot = *(s++);
			if (rot >= 97 && rot <= 122)
			{
				rot -= 97;
				rot = ((rot + 13) % 26) + 97;
			}
			else if (rot >= 65 && rot <= 90)
			{
				rot -= 65;
				rot = ((rot + 13) % 26) + 65;
			}
			data->len += write(1, &rot, 1);
		}
    }
}
