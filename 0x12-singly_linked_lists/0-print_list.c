#include "lists.h"

/**
 * print_list - print elements in a linked list.
 * @h: Pointer to the head of the first node.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 1;  /* initialize the node count with 0 */

	if (h == NULL)
		return (0);  /* return 0 if the list is empty */

	while (h->next != NULL)
	{
		/* If str is NULL, print len as 0 and str as (nil) */
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;  /* Move to the next node */
		node_count++;  /* Increment the node count */
	}

	/* Print for the last node */
	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}
