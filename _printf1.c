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
	int counter = 0;
	va_list args;
	int (*func)(va_list);

	if (!format)
		return (-1);

	va_start(args, format);

	/* if (*format == '\0')
	{
		format--;
		if (*format == '%')
			return (-1);
		else
			return (0);
	} */

	if (*format == '%' && (*format + 1) == '\0')
		return (-1);

	for (; *format != '\0'; format++)
	{
		if (*format == '%' && (*format + 1) != '\0')
		{
			format++;
			func = get_print_func(format);

			if (func == NULL)
				return (-1);

			if (func != NULL)
			{
				counter += func(args);
			}
			else
			{
				putchar('%');
				putchar(*format);
				counter += 2;
			}
		}
		else
		{
			putchar(*format);
			counter++;
		}
	}
	va_end(args);
	return (counter);
}
