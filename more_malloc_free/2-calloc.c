#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (ptr);
}
