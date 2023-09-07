#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: array
 * @size: size of element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int e;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);

	if (i == NULL)
		return (NULL);

	for (e = 0; e < (nmemb * size); e++)
		i[e] = 0;
	return (i);
}
