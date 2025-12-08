#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
    int i, len;
    char temp;

    if (!s)
        return;

    for (len = 0; s[len] != '\0'; len++)
        ;

    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}
