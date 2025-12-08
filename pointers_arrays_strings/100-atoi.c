#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	/* Determine the sign */
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}

	/* Convert digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1 && num > (2147483647 - (s[i] - '0')) / 10)
			return (2147483647);
		if (sign == -1 && num > (2147483648 - (s[i] - '0')) / 10)
			return (-2147483648);

		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
