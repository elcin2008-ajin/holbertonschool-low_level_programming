#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 'a' + 'A';

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 'a' + 'A';
				break;
		}
	}
	return (s);
}
