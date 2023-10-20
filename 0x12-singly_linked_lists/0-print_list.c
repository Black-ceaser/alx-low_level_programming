#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - prints elements in a list
 * @h: pointer for list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodec = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		if (curr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", curr->len, curr->str);
		}
		nodec++;
		curr = curr->next;
	}
	return (nodec);
}
