#include "main.h"
#include <stdarg.h>

/**
 * print_char - print a single character
 * @arg: parameter
 * Return: void
*/
void print_char(va_list arg)
{
	if(arg)
	{
		_putchar((unsigned char)va_arg(arg, int));
	}
}

/**
 * print_string - print a string
 * @arg: parameter
 * Return: void
*/
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
	{
		str = "(nil)";
	}

	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * print_percent - print a single character
 * @arg: parameter
 * Return: void
*/
void print_percent(va_list arg)
{
		_putchar('%');
}