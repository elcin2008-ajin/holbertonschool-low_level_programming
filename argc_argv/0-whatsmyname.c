#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Description: Prints the exact name used to call the program,
 * including the path, followed by a new line. If the program is renamed,
 * it will print the new name without recompilation.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    (void)argc; /* Unused parameter */

    printf("%s\n", argv[0]);

    return (0);
}
