#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int e;

	for (e = 1 ; e <= 100 ; e++)
	{
		if ((e % 3 == 0) && (e % 5 == 0))
		{
			printf("%s", "FizzBuzz");
		}
		else if (e % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (e % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", e);
		}
		if (e != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
