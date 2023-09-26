#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer
 * Return: value of nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int n;

	if (!head || !*head)
		return (0);

	newnode = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = newnode;
	return (n);
}
