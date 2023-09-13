#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: array
 * @size: size
 * @action: pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
