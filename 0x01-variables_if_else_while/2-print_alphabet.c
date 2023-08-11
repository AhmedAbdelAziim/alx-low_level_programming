#include <stdio.h>
/**
 * main - entry point
 * Discrption:'printing using putchar'
 * Return: 0 (success)
 */

int main(void)
{	char chr = 'a';

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar (chr);
	}
	return (0);
}
