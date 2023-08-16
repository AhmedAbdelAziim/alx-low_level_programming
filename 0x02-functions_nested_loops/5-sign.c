#include "main.h"
/**
 * print_sign - to check if the number is greater than or equal or less than 0
 * @n: the input num
 * Return: 1 is greater than 0. zero is 0. -1 is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{	_putchar(48);
		return (-1);
	}
	_putchar('\n');
}
