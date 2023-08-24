#include "main.h"
/**
 * *string_toupper - a function that changes all lowercase letters
 *of a string to uppercase.
 *@str: input value
 *Return: str
 */
char *string_toupper(char *str)
{
	int e;

	for (e = 0; str[e] != '\0'; e++)
	{
		if (str[e] >= 97 && str[e] <= 122)
		{
			str[e] = str[e] - 32;
		}
	}
	return (str);
}
