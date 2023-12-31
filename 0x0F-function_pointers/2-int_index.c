#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);
}
