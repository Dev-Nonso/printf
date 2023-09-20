#include "main.h"

/**
 * integeri__handler - Handle integers using va_list
 * @t_args: A va_list of arguments
 *
 * Return: The count of integers processed
 */

int integeri__handler(va_list t_args)
{
	int counter;

	int val = va_arg(t_args, int);

	counter = number_count(val, 0);

	return (counter);
}
