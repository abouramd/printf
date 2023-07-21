#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>

/**
 * strct data - struct
 * @p: va_list
 * @index: int
 * @format: format ptr
 * @len: int
 */

typedef struct data
{
    va_list p;
    const char *format;
    int index;
    int len;
} t_data;

/**
 * strct data - struct
 * @c: the flag
 * @ptr: pointer to function
 */
 
typedef struct flag
{
    char c;
    void (*ptr)(t_data);
} t_flag;


int _printf(const char *format, ...);

#endif
