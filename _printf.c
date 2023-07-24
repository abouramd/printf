#include "main.h"

/**
 * _printf - printf function
 * @format: const char pointer
 * Return: the len of the output
 */

int _printf(const char *format, ...)
{
	t_data data;
	t_flag flag[] = {
		{'c', &put_c},
		{'s', &put_s},
		//{'d', NULL},
		//{'i', NULL},
		{'b', &put_b},
		{'x', &put_x},
		{'X', &put_X},
		{'u', &put_u},
		{'p', &put_p},
		{'o', &put_o},
		{0, NULL}
	};
	int i;
	bool b;

	va_start(data.p, format);
	data.format = format;
	data.index = 0;
	data.len = 0;
	while (data.format[data.index])
	{
		i = 0;
		b = true;
        if (data.format[data.index] == '%') {
            int tmp_i = _flag(&data);
            while (flag[i].c) {
                if (flag[i].c == data.format[tmp_i]) {
                    flag[i].ptr(&data);
                    data.index = tmp_i;
                    b = false;
                    break;
                }
                i++;
            }
            if (b && data.format[tmp_i]) {
                data.len += write(1, &data.format[tmp_i], 1);
                data.index = tmp_i;
                b = false;
            }
            else if (b) {
                data.index = tmp_i;
                continue;
            }
        }
		if (b)
			data.len += write(1, &data.format[data.index], 1);
		data.index++;
	}
	va_end(data.p);
	return (data.len);
}
