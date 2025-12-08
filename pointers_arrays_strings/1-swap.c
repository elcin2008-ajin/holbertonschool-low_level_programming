#include "main.h"

/**
 * swap_int - iki ədədin dəyərlərini dəyişir
 * @a: birinci ədəd
 * @b: ikinci ədəd
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;  /* a-nın dəyərini müvəqqəti saxla */
    *a = *b;    /* b-nin dəyərini a-ya qoy */
    *b = temp;  /* temp-də saxlanmış a-nın dəyərini b-ya qoy */
}
