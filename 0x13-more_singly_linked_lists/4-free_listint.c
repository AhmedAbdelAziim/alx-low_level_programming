#include "lists.h"

/**
 * free_listint - a function that frees
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *newnode;

	while ((newnode = head) != NULL)
	{
		head = head->next;
		free(newnode);
	}
}
