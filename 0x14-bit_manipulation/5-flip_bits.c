#include "main.h"

/**
 * flip_bits - a function that returns the number of
 * bits you would need to flip
 * @n: int
 * @m: int
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{
		if (i & 1ul)
			count++;
		i = i >> 1;
	}
	return (count);
}
