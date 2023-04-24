#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - Produces output according to a format.
 * @format: is a pointer to a character string.
 *
 * Return - the number of characters printed
 *     (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int counter;

	va_list args;

	va_start(args, format);

	counter = 0;
	while (*format != '\0')
	{

		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 'c':
			{
				char c = (char)va_arg(args, int);

				putchar(c);
				counter++;
				break;
			}

			case 's':

			{
				char *str = va_arg(args, char *);

				while (*str != '\0')
				{
					putchar(*str);
					str++;
					counter++;
				}
				break;
			}

			case '%':

			{
				putchar('%');
				counter++;
				break;
			}
			case 'd':

			{
				int decimal = va_arg(args, int);

				putchar(decimal);
				counter++;
				break;
			}
			case 'i':

			{
				int integer = va_arg(args, int);
				putchar(integer);
				counter++;
				break;
			}
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