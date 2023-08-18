#include "main.h"
/**
 * print_triangle - to print a triangle
 * @size: to check the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a, e, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (e = size - a; e > 1; e--)
			{
				_putchar(' ');
			}
			for (i = 0; i <= a; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
