#include "lists.h"

/**
 * *add_nodeint_end - a function that adds a new node at the end
 * @head: pointer
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *currentnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
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
