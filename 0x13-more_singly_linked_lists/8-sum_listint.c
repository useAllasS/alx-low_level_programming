#include "lists.h"

/**
 * sum_listint - get the node at the specified index
 * @head: pointer to the head of the list
 * Return: pointer to the node at the specified index or NULL if not found
 */
int sum_listint(listint_t *head)
{
	int j = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		head = head->next;
		j += current->n;
		current = head;
	}
	return (j);
}
