#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This program prints its own name, as called
 * on the command line, followed by a new line.
 * If renamed, it prints the new name without recompiling.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    (void)argc; /* unused variable */

    printf("%s\n", argv[0]);

    return (0);
}
