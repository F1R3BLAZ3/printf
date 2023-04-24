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
			switch (*format)
			{
			case 'c':
				counter += putchar(va_arg(args, int));
				break;

			case 's':
				counter += puts(va_arg(args, char*));
				break;

			case '%':
				counter += putchar('%');
				break;

			default:
				counter += putchar('%');
				counter += putchar(*format);
				break;
			}
		}
		else
		{
			counter += putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (counter);
}
