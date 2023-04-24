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

	while (*format != '\0')
	{

		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 'c':
			{
				char c = va_arg(args, int);

				putchar(c);
				counter++;
				break;
			}

			case 's':

			{
				char *str = va_arg(args, char *);

				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					putchar(*str);
					counter++;
					str++;
				}
				break;
			}

			case '%':

			{
				putchar('%');
				counter++;
				break;
			}

			default:

			{
				putchar('%');
				putchar(*format);
				counter += 2;
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
