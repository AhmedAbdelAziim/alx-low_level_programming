#include "main.h"
/**
 * _islower - for lowercase alpha
 * @c: the charc that will be checked
 * Return: 1 for lowercase charc. 0 for upper.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
