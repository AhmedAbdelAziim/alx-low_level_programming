#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @n: int
 * @separator: string
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
