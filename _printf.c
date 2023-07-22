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
			{0, NULL}
	};
	int i;
	bool b;
    int tmp_i;

    va_start(data.p, format);
    data.format = format;
    data.index = 0;
    data.len = 0;
    while (data.format[data.index])
    {
      i = 0;
		b = true;
		if (data.format[data.index] == '%') {
			tmp_i = _flag(&data);
			while (flag[i].c) {
				if (flag[i].c == data.format[tmp_i]) {
                    flag[i].ptr(&data);
                    data.index = tmp_i;
                    b = false;
                    break;
                }
                i++;
            }
            else if (!data.format[tmp_i]) {
				break;
			}
        }
		if (b)
			data.len += write(1, &data.format[data.index], 1);
		data.index++;
	}
	va_end(data.p);
	return (data.len);
}
