#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

typedef struct
{
	char character;
	void (*func_ptr_printf)(va_list arg);

} print_t;

int _putchar(char c);
void print_null(void);
void print_char(va_list arg);
void print_string(va_list arg);
void print_percent(va_list arg);
int _printf(const char *format, ...);

#endif