#include "main.h"

/**
 * integeri__handler - Handle integers using va_list
 by Chinonso and Ezekiel
 * @t_args: A va_list of arguments
 *
 * Return: The count of integers processed
 */

int integeri__handler(va_list t_args)
{
	unsigned int counter;

	unsigned int val_i = va_arg(t_args, unsigned int);

	counter = number_count(val_i, 0, 0);

	return (counter);
}
