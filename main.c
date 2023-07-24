#include "main.h"
#include "_printf.c"
int main()
{
	_printf("%u\n", -1);
	printf("%u\n", -1);

	_printf("%b\n", 982);
	printf("%b\n", 982);

	int a = 10;
	int *b = &a;

	_printf("%p\n", &b);
	printf("%p\n", &b);

	_printf("%p\n", b);
	printf("%p\n", b);

	_printf("%o\n", 2323);
	printf("%o\n", 2323);

	_printf("%x\n", 323231);
	printf("%x\n", 323231);

	_printf("%X\n", 323231);
	printf("%X\n", 323231);


}