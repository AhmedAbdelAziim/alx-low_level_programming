#include "main.h"

/**
 * _isupper - to check for the uppercase letters.
 *
 * @c: refers to the char
 * Return: 1 for uppercase letters. otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
