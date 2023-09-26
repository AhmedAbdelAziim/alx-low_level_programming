#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 * @head: pointer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
