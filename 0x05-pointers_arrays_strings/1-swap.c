#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 *@a: a value that will be swaped
 *@b: a value that will be swaped
 *Return: a, b
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}