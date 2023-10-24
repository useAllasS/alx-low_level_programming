#include "lists.h"

/**
 * listint_len - print list
 * @h : argument
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int n = 0;

	while (current)
	{
		n++;
		current = current->next;
	}
	return (n);
}
