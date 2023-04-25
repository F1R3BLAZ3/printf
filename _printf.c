#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


/**
 * _printf - Produces output according to a format.
 * @format: is a pointer to a character string.
 * @...: A variable number of arguments to replace the directives in @format
 *
 * Return: the number of characters printed
 *         (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	print_func_t print_funcs[] = {
	    {"c", print_char}, {"s", print_string}, {"%", print_percent},
	    {"d", print_int}, {"i", print_int}, {NULL, NULL}
	};

	va_list args;
	int i, j, counter = 0;

	if (!format)
		return (-1);
	if (*format == '%' && (*format + 1) == '\0')
		return (-1);

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && (*format + 1) != '\0')
		{
			for (j = 0; print_funcs[j].type; j++)
			{
				if (format[i + 1] == print_funcs[j].type[0])
				{
					counter += print_funcs[j].func(args);
					i++;
					break;
				}
			}
			if (print_funcs[j].type == NULL)
				counter += write(1, &format[i], 1);
		}
		else
			counter += write(1, &format[i], 1);
	}
	va_end(args);
	return (counter);
}
