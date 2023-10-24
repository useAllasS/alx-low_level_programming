#include "lists.h"

/**
 * free_listint - print list
 * @head : argument
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
