#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: pointer to a pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;

		prev = current;
		current = next_node;
	}

	*head = prev;
	return (*head);
}
