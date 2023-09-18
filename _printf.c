#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: A format string specifying the output format.
 *
 * This function takes a format string and a variable number of arguments
 * and prints formatted output according to the format specifier in the string.
 * It supports '%c' for characters, '%d' for integers, and '%s' for strings.
 *
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i;
        unsigned int num_count = 0;

	va_list count_args;

	va_start(count_args, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == 'd' || format[i] == 's')
			{
				num_count += my_selector(format[i])(count_args);
			}
			else
			{
				num_count += __putchar('%');
				continue;
			}
		}
		else
		{
			num_count += __putchar(format[i]);
		}
	}

	return (num_count);
}
