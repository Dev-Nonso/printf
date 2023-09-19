#include "main.h"

/**
 *char__handler -  handle or process character data
 by Chinonso and Ezekiel
 *@t_args: t_args if repossible for counting va_list
 *Return: return counter is successful
 */

int char__handler(va_list t_args)
{
	int counter;

	char get_count = va_arg(t_args, int);

	counter = __putchar(get_count);

	return (counter);
}
/**
 *integer__handler -  handle or process integer data
 *@t_args: t_args if repossible for counting va_list
 *Return: return counter is successful
 */
int integer__handler(va_list t_args)
{
	unsigned int counter;

	unsigned int value = va_arg(t_args, unsigned int);

	counter = number_count(value, 0, 0);

	return (counter);
}
