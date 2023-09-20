#include "main.h"

/**
 * my_selector - Selects a function based on the input character.
 by Chinonso and Ezekiel
 * @len: The character representing the type of function to select.
 *
 * This function takes a character 'len' as input and returns a function
 * pointer to the corresponding handler function. It supports the following
 * characters: 'c' for char__handler, 'd' for integer__handler, 's' for
 * string__handler.
 *
 * Return: A function pointer to the selected handler function, or NULL if
 *         'len' is not a recognized character.
 */

int (*my_selector(char len))(va_list count_args)
{
	if (len == 'c')
	{
		return (&char__handler);
	}
	else if (len == 'd')
	{
		return (&integer__handler);
	}
	else if (len == 's')
	{
		return (&string__handler);
	}
	else if (len == 'i')
	{
		return (&integeri__handler);
	}
	return (0);
}
