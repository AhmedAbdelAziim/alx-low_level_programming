#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: int
 * @max: max int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, e;
	int *j;

	if (min > max)
		return (NULL);

	e = max - min + 1;
	j = malloc(sizeof(int) * e);

	if (j == NULL)
		return (NULL);

	for (i = 0; i < e; i++)
	{
		j[i] = min++;
	}
	return (j);
}
