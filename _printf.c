#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

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
	int counter;

	va_list args;

	va_start(args, format);

	counter = 0;

	if (*format == '\0')
	{
		format--;
		if (*format == '%')
		{
			return (-1);
		}
	}

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			int (*func)(va_list) = get_print_func(*format);
			if (func != NULL)
			{
				func(args);
				counter++;
			}
			else
			{
				putchar('%');
				putchar(*format);
				counter++;
			}
		}
		else
		{
			putchar(*format);
			counter++;
		}
		format++;
	}

	va_end(args);
	return (counter);
}
