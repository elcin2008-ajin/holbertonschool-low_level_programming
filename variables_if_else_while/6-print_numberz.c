#include <stdio.h>

/**
 * main - prints numbers 0 to 9 using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');

	return (0);
}
