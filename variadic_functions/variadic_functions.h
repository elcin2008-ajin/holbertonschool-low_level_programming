#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* 0. sum_them_all - returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/* 1. print_numbers - prints numbers, followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2. print_strings - prints strings, followed by a new line */
void print_strings(const char *separator, const unsigned int n, ...);

/* 3. print_all - prints anything, followed by a new line */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
