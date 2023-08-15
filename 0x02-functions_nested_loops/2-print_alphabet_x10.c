#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: 'printing 10 times the alphabet'
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char n;
	int a = 0;

	while (a < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		a++;
	}
}
