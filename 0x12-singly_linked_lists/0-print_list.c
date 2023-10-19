#include "lists.h"

/**
 * print_list - print list
 * @h : argument
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int n = 0;

	while (current != NULL)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		n++;
		current = current->next;
	}
	return (n);
}
