#include "main.h"

/**
 * string__handler - Handles a string.
 by Chinonso and Ezekiel
 * @t_args: A va_list containing the string to handle.
 * This function takes a va_list t_args, extracts a
 * string from it using va_arg.`
 * Return: The number of characters printed.
 */

int string__handler(va_list t_args)
{
	int counter = 0;

	char *str_len = va_arg(t_args, char *);

	if (str_len == NULL)
	{
		str_len = "(null)";
	}
	while (*str_len)
	{
		counter += __putchar(*str_len);
		str_len++;
	}

	return (counter);
}
