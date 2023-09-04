#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 *  allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *e;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	;

	e = malloc(size * sizeof(*str) + 1);

	if (e == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			e[i] = str[i];
	}
	return (e);
}
