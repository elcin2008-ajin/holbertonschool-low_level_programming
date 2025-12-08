#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;  // a-nın dəyərini müvəqqəti saxla
    *a = *b;    // b-nin dəyərini a-ya qoy
    *b = temp;  // müvəqqəti dəyəri b-ə qoy
}
