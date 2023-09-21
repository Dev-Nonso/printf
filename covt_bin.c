#include "main.h"

/**
 * convert_bin - Convert an unsigned integer to binary and print it
 * @u: The unsigned integer to convert
 *
 * Return: The number of characters printed
 */

int convert_bin(unsigned int u)
{
	int i = 0, count = 0, bin_len = 0;

	char bin_str[50];

	do {
		bin_str[bin_len++] = '0' + (u % 2);
		u /= 2;
	} while (u != 0);

	for (i = bin_len - 1; i >= 0; i--)
		count += __putchar(bin_str[i]);
	return (count);
}
