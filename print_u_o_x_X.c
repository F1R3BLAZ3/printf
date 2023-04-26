#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * print_unsigned_dec - prints an unsigned decimal.
 * @args: a va_list of arguments.
 *
 * Return: the number of characters printed
 */

int print_unsigned_dec(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_number(n, 10));
}

/**
 * print_oct - prints an unsigned int in base 8.
 * @args: a va_list of arguments.
 *
 * Return: the number of characters printed
 */

int print_oct(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_number(n, 8));
}

/**
 * print_hex - prints an unsigned int in base 16.
 * @args: a va_list of arguments.
 *
 * Return: the number of characters printed
 */

int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_hex_number(n, "0123456789abcdef"));
}

/**
 * print_HEX - prints an unsigned int in base 16.
 * @args: a va_list of arguments.
 *
 * Return: the number of characters printed
 */

int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_hex_number(n, "0123456789ABCDEF"));
}
