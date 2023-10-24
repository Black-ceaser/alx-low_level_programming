#include "lists.h"

/**
 * print_listint - A program that prints elements in a string
 * @h: a pointer to the nodes in the list
 * Return: (number of node);
 */
size_t print_listint(const listint_t *h)
{
	size_t nodec = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodec++;
	}
	return (nodec);
}
