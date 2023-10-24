#include "lists.h"

/**
 * print_listint - print list
 * @h : argument
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int len = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		len++;
		current = current->next;
	}
	return (len);
}
