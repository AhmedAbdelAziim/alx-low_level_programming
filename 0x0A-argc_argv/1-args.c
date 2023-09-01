#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
