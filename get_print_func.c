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
	int (*print_funcs[])(va_list) = {
	    print_char,
	    print_string,
	    NULL
	};
	char types[] = {'c', 's', '\0'};

	int i = 0;
	while (types[i] != '\0')
	{
		if (types[i] == *type)
			return print_funcs[i];
		i++;
	}
	return (NULL);
}