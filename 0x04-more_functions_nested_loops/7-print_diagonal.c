#include "main.h"
/**
 * print_diagonal - to print a diagonal
 * @n: the number of times \ will be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e, a;

		for (e = 0 ; e < n ; e++)
		{
			for (a = 0 ; a <= e ; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
