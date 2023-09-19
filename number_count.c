#include "main.h"

/**
 * number_count - Counts the number of digits in an unsigned integer.
 * @n: The unsigned integer to count digits in.
 * @counter: The current count of digits.
 * @isOctal: counting the integer i digits.
 *
 * This function counts the number of digits in an unsigned
 * integer 'n'. If 'n'
 * is negative, it prints a '-' sign and continues counting.
 * It uses recursion
 * to count each digit and returns the total count.
 *
 * Return: The total count of digits in 'n'.
 */

int number_count(unsigned int n, int counter, unsigned int isOctal)
{
	if (n <= 0)
	{
		__putchar('-');
		counter++;
		n = n * -1;
	}
	if (n / 10)
	{
		counter = number_count(n / 10, counter, isOctal);
	}
	__putchar(n % 10 + '0');

	if (isOctal)
	{
		counter++;
		__putchar('0');
	}
	return (counter + 1);
}
