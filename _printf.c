#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - Produces output according to a format.
 * @format: is a pointer to a character string.
 *
 * Return: the number of characters printed
 *     (excluding the null byte used to end output to strings)
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

	if (format == NULL)
	{
		return (NULL);
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
					if (s == NULL)
						s = "(null)";
					While(*str)
					{
						putchar(*str);
						counter++;
						str++;
					}
				}
				break;
			}

			case '%':

			{
				putchar('%');
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

		if (*format == '\\')
		{
			switch (*format)
			{
			case 'n':

			{
				putchar('\n');
				break;
			}

			case 't':

			{
				putchar('\t');
				break;
			}
			}
		}
	}

	va_end(args);
	return (counter);
}
