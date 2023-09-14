#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @n: number of strings
 * @separator: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
