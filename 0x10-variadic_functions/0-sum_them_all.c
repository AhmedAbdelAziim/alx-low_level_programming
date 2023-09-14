#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: integer
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	va_list list;
	unsigned int e;

	va_start(list, n);

	for (e = 0; e < n; e++)
	{
		i += va_arg(list, int);
	}
	va_end(list);

	return (i);
}
