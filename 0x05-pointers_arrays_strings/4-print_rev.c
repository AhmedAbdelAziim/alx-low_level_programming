#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string value
 */
void print_rev(char *s)
{
	int longi = 0;
	int e;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (e = longi; e > 0; e--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
