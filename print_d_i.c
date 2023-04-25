#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * print_int - prints an integer
 * @args: a va_list of arguments
 *
 * Return: the number of characters printed
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int len = 0;

	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}

	len += print_number(n, 10);

	return (len);
}
