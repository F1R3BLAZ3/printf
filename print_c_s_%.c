#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - Prints a char to stdout.
 * @args: A list of arguments containing the char to print.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	int len = 0;
	char c = va_arg(args, int);

	putchar(c);
	len++;
	return (len);
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

	if (*str)
		str = "(null)";

	if (*str == '\0')
	{
		putchar('\0');
		return 0;
	}

	while (*str)
	{
		putchar(*str);
		len++;
		str++;
	}

	return (len);
}

/**
 * print_percent - prints percent to stdout.
 *  @args: A list of arguments containing % to print.
 * Return: 1.
 *
 */

int print_percent(va_list args)
{
	int len = 0;

	(void)args;
	putchar('%');
	len++;
	return (len);
}
