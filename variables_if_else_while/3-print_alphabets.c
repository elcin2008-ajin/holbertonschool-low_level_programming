#include <stdio.h>

int main(void)
{
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; lower[i] != '\0'; i++)
        putchar(lower[i]);

    for (int i = 0; upper[i] != '\0'; i++)
        putchar(upper[i]);

    putchar('\n');

    return (0);
}
