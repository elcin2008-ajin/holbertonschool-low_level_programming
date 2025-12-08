#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int len = 0, i;

	/* hesabla uzunluğu */
	while (str[len] != '\0')
		len++;

	/* əgər uzunluq təkdirsə, başlayacağımız yer (len + 1) / 2 */
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	/* ikinci yarısını çap et */
	for (; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
