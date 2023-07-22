#include "main.h"

/**
 * _flag - check flag after %
 * @data: struct of my data
 * Return: the new index of the first char after spaces, + and #
 */

int _flag(t_data *data)
{
    int i = data->index + 1;
    data->plus = false;
    data->hash = false;
    while (data->format[i])
    {
        if (data->format[i] != ' ') {
            if (data->format[i] == '+')
                data->plus = true;
            else if (data->format[i] == '#')
                data->hash = true;
            else
                break;
        }
        i++;
    }
    return (i);
}
