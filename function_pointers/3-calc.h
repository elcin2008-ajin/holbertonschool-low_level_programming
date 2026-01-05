#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct for an operator and its function
 * @op: operator string ("+", "-", "*", "/", "%")
 * @f: pointer to the function that performs the operation
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Prototypes for the operator functions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Prototype for get_op_func */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
