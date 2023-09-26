#include "lists.h"

/**
 * *add_nodeint -  a function that adds a new node at the beginning
 * @head: pointer
 * @n: int
 * Return: the address of the new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
