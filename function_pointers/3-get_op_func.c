#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - returns a pointer to the correct function
 * @s: operator string
 * Return: pointer to function, or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    if (s)  /* yalnız 1 if istifadə olunur */
        while (ops[i].op && strcmp(s, ops[i].op) != 0)
            i++;

    return (ops[i].op ? ops[i].f : NULL);
}
