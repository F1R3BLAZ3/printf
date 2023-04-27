#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * print_char - Prints memory address of a pointer to stdout.
 * @args: A list of arguments containing the pointer
 *        whose memory address is to be to printed.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}