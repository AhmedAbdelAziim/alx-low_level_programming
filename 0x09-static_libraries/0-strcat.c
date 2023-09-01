#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: input value
 * @src: input value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int e;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[i] = src[e];
		i++;
		e++;
	}
	dest[i] = '\0';
	return (dest);
}
