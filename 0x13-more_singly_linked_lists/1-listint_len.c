#include "lists.h"

/**
 * listint_len - checks the number of elments in a list
 * @h: a pointer to the list given
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodec = 0;

	while (h != NULL)
	{
		h = h->next;
		nodec++;
	}

	return (nodec);
}
