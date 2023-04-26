#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print_func - Struct containing a char and a pointer to a function.
 * @type: The character format specifier.
 * @func: Pointer to a function that handles the corresponding format specifier
 */
typedef struct print_func
{
	char *type;
	int (*func)(va_list);
} print_func_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_unsigned_dec(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_number(unsigned int n, int base);
int write_string_rev(char *str);
int print_bin(va_list args);
int print_hex_number(unsigned int n, char *base);
int print_custom_S(va_list args);

#endif /* MAIN_H */
