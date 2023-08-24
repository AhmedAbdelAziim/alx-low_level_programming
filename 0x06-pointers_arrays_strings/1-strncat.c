#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int e;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (e < n && src[e] != '\0')
	{
		dest[i + e] = src[e];
		e++;
	}
	dest[i + e] = '\0';
	return (dest);
}
