#include <unistd.h>

/**
 * _putchar - yazır bir simvol stdout-a
 * @c: çap olunacaq simvol
 *
 * Return: 1 uğurla, -1 əks halda
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
