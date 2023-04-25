#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_decimal(va_list args);
int print_unsigned_decimal(va_list args);
int print_octal(va_list args);
int print_hexidecimal(va_list args);
int (*get_print_func(const char *type))(va_list);
int _write(char s);

#endif /* MAIN_H */
