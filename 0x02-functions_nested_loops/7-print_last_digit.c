#include "main.h"
/**
 * print_last_digit - to print the last digit
 * @a: input number
 * Return: last digi
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
