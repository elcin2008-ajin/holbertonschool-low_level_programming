#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */

/* Task 0: concatenates two strings */
char *_strcat(char *dest, char *src);

/* Task 1: concatenates at most n characters of src to dest */
char *_strncat(char *dest, char *src, int n);

/* Task 2: copies a string */
char *_strncpy(char *dest, char *src, int n);

/* Task 3: compares two strings */
int _strcmp(char *s1, char *s2);

/* Task 4: reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* Task 5: changes all lowercase letters of a string to uppercase */
char *string_toupper(char *s);

/* _putchar prototype */
int _putchar(char c);

#endif /* MAIN_H */
