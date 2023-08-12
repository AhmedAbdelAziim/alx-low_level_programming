#include <stdio.h>
/**
 * main - entry point
 * Discrption:'printing alpha using putchar'
 * Return: 0 (success)
 */

int main(void)
{       char chr = 'z';

	for (chr = 'z'; chr <= 'a'; chr++)
	{
		putchar (chr);
	}
	putchar ('\n');
	return (0);
}
