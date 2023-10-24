#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * print_listint_safe - print a listint_t linked list safely
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	intptr_t *addresses = NULL;
	size_t i = 0;

	addresses = malloc(sizeof(intptr_t) * 1024);

	if (addresses == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}

	while (current != NULL)
	{
		for (i = 0; i < node_count; i++)
		{
			if (addresses[i] == (intptr_t)current)
			{
				fprintf(stdout, "-> [%p] %d\n", (void *)current, current->n);
				free(addresses);
				return (node_count);
			}
		}

		addresses[node_count] = (intptr_t)current;
		node_count++;
		fprintf(stdout, "[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	free(addresses);
	return (node_count);
}
