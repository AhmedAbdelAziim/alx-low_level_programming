#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns the nth node
 * @head: pointer
 * @index: nodes
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *newnode;
	unsigned int n;

	for (newnode = head, n = 0; newnode && n < index;
			newnode = newnode->next, n++)
		;
	return (newnode);
}
