#include "main.h"
/**
 * _strcpy -  a function that copies the string pointed to by src
 * @dest: destination value
 * @src: source value
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int e;

	for (e = 0; src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}
	dest[e++] = '\0';
	return (dest);
}
