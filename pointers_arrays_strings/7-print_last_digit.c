#include "main.h"

/**
 * print_last_digit - çap edir bir rəqəmin son rəqəmini
 * @n: rəqəm
 *
 * Return: son rəqəm
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = -n;
	last = n % 10;
	_putchar('0' + last);
	return (last);
}
