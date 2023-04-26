#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * print_number - prints a number using a specified base
 * @n: the number to print
 * @base: the base to use for printing
 *
 * Return: the number of characters printed
 */

int print_number(unsigned int n, int base)
{
	char buffer[1024];
	char *ptr = buffer;
	int len = 0;

	if (n == 0)
	{
		len += write(1, "0", 1);
		return (len);
	}

	while (n != 0)
	{
		int rem = n % base;

		if (rem < 10)
			*ptr++ = rem + '0';
		else
			*ptr++ = rem - 10 + 'a';

		n /= base;
	}

	*ptr = '\0';
	len += write_string_rev(buffer);

	return (len);
}

/**
 * write_string_rev - writes a string in reverse
 * @str: the string to write
 *
 * Return: the number of characters written
 */

int write_string_rev(char *str)
{
	int len = 0;
	char *end = str + strlen(str) - 1;

	while (end >= str)
	{
		len += write(1, end, 1);
		end--;
	}

	return (len);
}

/**
 * print_hex_number - Prints a hexadecimal number.
 * @n: Unsigned int to be printed.
 * @base: Base to be used for conversion (hex lowercase or uppercase).
 *
 * Return: The number of characters printed.
 */

int print_hex_number(unsigned int n, char *base)
{
	char buffer[1024];
	char *ptr = buffer;
	int len = 0;

	if (n == 0)
	{
		len += write(1, "0", 1);
		return (len);
	}

	while (n != 0)
	{
		int rem = n % 16;

		*ptr++ = base[rem];

		n /= 16;
	}

	*ptr = '\0';
	len += write_string_rev(buffer);

	return (len);
}
