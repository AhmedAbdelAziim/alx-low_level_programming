#include "lists.h"

/**
 * free_listint2 - a function that frees
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *newnode;

	if (head == NULL)
		return;

	while (*head)
	{
		newnode = (*head)->next;
		free(*head);
		*head = newnode;
	}

	head = NULL;
}
