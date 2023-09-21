#include "lists.h"

/**
 * free_list -  a function that frees
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
