#include "main.h"

/**
 * _printf_util - print a char
 * @data: struct of my data
 * @flag: array of flags a and pointres to handlers
 * Return: void
 */

void _printf_util(t_data *data, t_flag *flag)
{
	int i;
	bool b;
	int tmp_i;

	while (data->format[data->index])
	{
		i = 0;
		b = true;
		if (data->format[data->index] == '%')
		{
			tmp_i = _flag(data);
			while (flag[i].c)
			{
				if (flag[i].c == data->format[tmp_i])
				{
					flag[i].ptr(data);
					b = false;
					break;
				}
				i++;
			}
			data->index = tmp_i;
			if (!data->format[tmp_i])
			{
				data->len = -1;
				break;
			}
		}
		if (b)
			data->len += write(1, &data->format[data->index], 1);
		data->index++;
	}
	va_end(data->p);
}

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
		{'%', &put_pors},
		{'i', &put_d},
		{'d', &put_d},
		{'r', &put_r},
		{'R', &put_r13},
		{'b', &put_b},
		{'x', &put_x},
		{'X', &put_X},
		{'u', &put_u},
		{'p', &put_p},
		{'o', &put_o},
		{0, NULL}
	};

	data.format = format;
	data.index = 0;
	data.len = 0;
	if (!format)
		return (-1);
	if (format[0] == '%' && format[1] == 0)
		return (-1);
	va_start(data.p, format);
	_printf_util(&data, flag);
	return (data.len);
}
