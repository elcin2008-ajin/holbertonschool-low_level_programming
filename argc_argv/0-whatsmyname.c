#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argc; /* unused warning aradan qaldırmaq üçün */

    printf("%s\n", argv[0]);

    return (0);
}
