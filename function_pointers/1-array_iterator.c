#include "function_pointers.h"
#include <stddef.h>  /* for size_t and NULL */

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
