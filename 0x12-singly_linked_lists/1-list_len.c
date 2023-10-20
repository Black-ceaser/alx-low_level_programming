#include <stddef.h>
#include "lists.h"

/**
 * list_len - prints the number of elements in a list
 * @h: pointer of list_t
 * Return: no of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nodec = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		nodec++;
		curr = curr->next;
	}
	return (nodec);
}
