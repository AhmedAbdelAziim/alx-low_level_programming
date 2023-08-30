#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: string
 * @i: value
 * Return: 1 if the input integer
 * is a prime number, otherwise return 0
 */
int check_prime(int n, int i);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check the number is its < n
 * @n: value
 * @i: value
 * Return: int
 */
int check_prime(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
