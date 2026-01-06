#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* 0. sum_them_all */
int sum_them_all(const unsigned int n, ...);

/* 1. print_numbers */
void print_numbers(const char *separator, const unsigned int n, ...);

/* 2. print_strings */
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
