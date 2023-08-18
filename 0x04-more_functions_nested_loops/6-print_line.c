#include "main.h"
/**
 * print_line - to print a line
 * @n: the number of times _ will be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e;

		for (e = 1 ; e <= n ; e++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
