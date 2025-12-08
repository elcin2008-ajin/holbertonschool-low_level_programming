#include "main.h"

/**
 * main - proqramı yoxlayır
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	r = print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('\n');

	return (0);
}
