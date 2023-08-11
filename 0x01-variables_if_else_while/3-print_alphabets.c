#include <stdio.h>
/**
 * main - entry point
 * Discrption:'printing using putchar'
 * Return: 0 (success)
 */

int main(void)
{       char chr = 'a';
	char cht = 'A';

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar (chr);
	}
	for (cht = 'A'; cht <= 'Z'; cht++)
	{
		putchar (cht);
	}
	putchar ('\n');
	return (0);
}
