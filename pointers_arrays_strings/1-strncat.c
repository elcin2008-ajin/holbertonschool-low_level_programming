#include "main.h"

/**
 * _strncat - concatenates at most n characters of src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    /* Find the end of dest */
    while (dest[i] != '\0')
        i++;

    /* Copy at most n characters from src to dest */
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Add null terminator */
    dest[i] = '\0';

    return (dest);
}
