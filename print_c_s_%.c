#include "main.h"
#include <stdlib.h>

/**
 * print_char - Prints a char to stdout.
 * @args: A list of arguments containing the char to print.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}

/**
 * print_string - Prints a string to stdout.
 * @args: A list of arguments containing the string to print.
 *
 * Return: The number of characters printed.
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		putchar(*str);
		len++;
		str++;
	}

	return (len);
}