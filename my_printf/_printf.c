#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: a character string
 * Return: int
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j;

	print_t printf_func[] = {
		{ 'c', print_char },
		{ 's', print_string },
		{ '%', print_percent },
	};

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			
			while (j < 3)
			{
				if (format[i] == printf_func[j].character)
				{
					printf_func[j].func_ptr_printf(ap);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}

	va_end(ap);

	return (0);

}