#include "main.h"
/**
 * print_square - is used to print the square
 * @size: the size of the square printed
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e;
		int a;

		for (e = 1 ; e <= size ; e++)
		{
			for (a = 1 ; a <= size ; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
