#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - a function that prints a name.
 * @name:the name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
