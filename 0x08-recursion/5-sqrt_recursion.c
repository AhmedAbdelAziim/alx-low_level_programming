#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number.
 * @n: value
 * @i: square root
 * Return: returns the natural square root of a num
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}



/**
 * square - square rooy
 * @n: int
 * @i: square root
 * Return: int
 */
int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (square(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
