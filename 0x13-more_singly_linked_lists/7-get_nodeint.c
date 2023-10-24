#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the specified index
 * @head: pointer to the head of the list
 * @index: the index of the node to retrieve
 * Return: pointer to the node at the specified index or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}

	return (NULL);
}
