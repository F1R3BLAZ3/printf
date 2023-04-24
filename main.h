#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_func - Struct containing a char and a pointer to a function.
 * @type: The character format specifier.
 * @func: Pointer to a function that handles the corresponding format specifier
 */
typedef struct print_func
{
	char type;
	int (*func)(va_list);
} print_func_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_int(va_list args);
int print_decimal(va_list args);
int print_unsigned_decimal(va_list args);
int print_octal(va_list args);
int print_hexidecimal(va_list args);
int (*get_print_func(char type))(va_list);

#endif /* MAIN_H */
