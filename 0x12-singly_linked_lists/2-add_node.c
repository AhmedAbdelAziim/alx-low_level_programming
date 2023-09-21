#include "lists.h"

/**
 * *add_node - a function that adds a new node
 * @head: pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int len = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;

	newnode->len = len;
	newnode->str = strdup(str);
	*head = newnode;
	return (newnode);
}
