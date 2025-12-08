#include "main.h"

/**
 * _strlen - stringin uzunluğunu qaytarır
 * @s: ölçüləcək string
 *
 * Return: stringin uzunluğu
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}
