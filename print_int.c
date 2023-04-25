#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_int - Prints an integer to stdout.
 * @args: A list of arguments containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int counter = 0;
    int sign = 1;
    unsigned int num;

    if (n < 0)
    {
        sign = -1;
        num = -n;
        counter += write(1, "-", 1);
    }
    else
    {
        num = n;
    }

    if (num / 10)
    {
        counter += print_int(args);
    }

    counter += write(1, &((num % 10) + '0'), 1);

    return (counter);
}