#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * struct data - struct
 * @p: va_list
 * @index: int
 * @format: format ptr
 * @len: int
 * @plus: flag to check +
 * @hash: flag to check #
 */

typedef struct data
{
	va_list p;
	const char *format;
	int index;
	int len;

	bool plus;
	bool hash;
} t_data;

/**
 * struct flag - struct
 * @c: the flag
 * @ptr: pointer to function
 */

typedef struct flag
{
	char c;
	void (*ptr)(t_data *);
} t_flag;


int _printf(const char *format, ...);
int _flag(t_data *data);
void put_c(t_data *data);
void put_s(t_data *data);
void put_pors(t_data *data);
void put_base(t_data *data, long n, char *strbase, int base);
void put_d(t_data *data);
void put_r(t_data *data);
void put_r13(t_data *data);

void put_b(t_data *data);
void put_x(t_data *data);
void put_X(t_data *data);
void put_u(t_data *data);
void put_p(t_data *data);
void put_o(t_data *data);
void put_ubase(t_data *data, unsigned long n, char *strbase,
unsigned long base);


#endif
