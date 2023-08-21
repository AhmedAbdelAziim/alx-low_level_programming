#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *@str: the value of a string
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
