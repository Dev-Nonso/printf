#include "main.h"

/**
 * __putchar - writes the character c to stdout
 by Chinonso and Ezekiel
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int __putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
