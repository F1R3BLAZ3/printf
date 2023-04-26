#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * print_custom_S - prints customised string.
 * @args: a va_list of arguments.
 *
 * Return: the number of characters printed.
*/

int print_custom_S(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while(str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			len += write(1, "\\x", 2);
			len += print_hex_number((unsigned int)str[i], "0123456789ABCDEF");
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	return (len);
}
