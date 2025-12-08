#ifndef MAIN_H
#define MAIN_H

/* 0. Takes a pointer to an int and updates the value it points to 98 */
void reset_to_98(int *n);

/* 1. Swaps the values of two integers */
void swap_int(int *a, int *b);

/* 2. Returns the length of a string */
int _strlen(char *s);

/* 3. Prints a string, followed by a new line */
void _puts(char *str);

/* 4. Prints a string in reverse, followed by a new line */
void print_rev(char *s);

/* 5. Reverses a string */
void rev_string(char *s);

/* 6. Prints every other character of a string, starting with the first character */
void puts2(char *str);

/* 7. Prints half of a string */
void puts_half(char *str);

/* 8. Prints n elements of an array of integers */
void print_array(int *a, int n);

/* Provided _putchar function declaration */
int _putchar(char c);

#endif /* MAIN_H */
