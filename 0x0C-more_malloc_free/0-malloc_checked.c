#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: int
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);

	return (i);
}
