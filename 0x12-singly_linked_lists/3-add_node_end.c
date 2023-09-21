#include "lists.h"

/**
 * *add_node_end - a function that adds a new node at the end
 * @head: pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *currentnode;
	size_t i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	newnode->len = i;
	newnode->next = NULL;
	currentnode = *head;

	if (currentnode == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (currentnode->next != NULL)
			currentnode = currentnode->next;
		currentnode->next = newnode;
	}
	return (*head);
}
