#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int __putchar(char c);
int char__handler(va_list count_args);
int integer__handler(va_list count_args);
int string__handler(va_list count_args);
int (*my_selector(char len))(va_list count_args);
int number_count(unsigned int n, int counter, unsigned int isOctal);
int _printf(const char *format, ...);
int integeri__handler(va_list t_args);


#endif /* MAIN_H */
