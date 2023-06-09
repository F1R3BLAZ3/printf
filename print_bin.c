#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * print_bin - Prints an unsigned int in binary format.
 * @args: A va_list of arguments.
 *
 * Return: The number of characters printed.
 */

int print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;

	len += print_number(n, 2);

	return (len);
}
