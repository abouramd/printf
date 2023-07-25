#include "main.h"

/**
 * _flag - check flag after %
 * @data: struct of my data
 * Return: the new index of the first char after spaces, + and #
 */

int _flag(t_data *data)
{
	int i = data->index + 1;

	data->plus = 0;
	data->hash = 0;
	while (data->format[i])
	{
		if (data->format[i] != ' ')
		{
			if (data->format[i] == '+')
				data->plus = 1;
			else if (data->format[i] == '#')
				data->hash = 1;
			else
				break;
		}
		i++;
	}
	return (i);
}
