#include <stdio.h>
/**
 * main - entry point
 * Discrption:'printing alpha using putchar'
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
