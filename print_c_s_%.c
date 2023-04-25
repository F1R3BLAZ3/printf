#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * print_char - Prints a char to stdout.
 * @args: A list of arguments containing the char to print.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
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

	if (str == NULL)
		str = "(null)";

	if (*str == '\0')
	{
		return (write(0, '\0', 0));
	}

	return (write(1, str, strlen(str)));
}

/**
 * print_percent - prints percent to stdout.
 *  @args: A list of arguments containing % to print.
 * Return: 1.
 *
 */

int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
