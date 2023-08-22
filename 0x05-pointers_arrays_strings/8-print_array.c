#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array of int
 * @n: number of elments of array
 */
void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		printf("%d", a[e]);
		if (e != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
