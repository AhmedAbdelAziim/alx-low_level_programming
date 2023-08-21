#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: the string value
 * Return: the count of the string
 */
int _strlen(char *s)
{
	int count= 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
