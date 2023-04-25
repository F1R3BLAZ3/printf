#include "main.h"
#include <stdlib.h>

/**
 * get_print_func - Gets the appropriate print
 *          function for a given format specifier.
 * @type: The format specifier character.
 *
 * Return: A pointer to the appropriate print function,
 *           or NULL if the specifier is invalid.
 */

int (*get_print_func(const char *type))(va_list)
{
	print_func_t print_funcs[] = {
	    {'c', print_char},
	    {'s', print_string},
	    {'%', print_percent},
	    {0, NULL}};

	int i = 0;

	while (print_funcs[i].type != 0)
	{
		if (print_funcs[i].type == type)
			return (print_funcs[i].func);

		i++;
	}

	return (NULL);
}
