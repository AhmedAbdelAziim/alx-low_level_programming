#include "main.h"

/**
 * _isdigit - to check for the digits
 * @c: integer for numbers
 * Return: 1 if its a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
