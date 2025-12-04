#include "main.h"

/**
 * print_most_numbers - 0-dan 9-a qədər ədədləri çap edir
 * 2 və 4-ü çıxmaq şərti ilə, sonra yeni sətr əlavə olunur.
 */
void print_most_numbers(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        if (i != 2 && i != 4)   // 2 və 4-ü atırıq
            _putchar(i + '0');  // ədədin simvolunu çap edirik
    }
    _putchar('\n');            // yeni sətr
}
