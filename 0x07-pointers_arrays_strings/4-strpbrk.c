#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, e;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[i] == accept[e])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
