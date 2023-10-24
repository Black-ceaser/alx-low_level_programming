#include "lists.h"

/**
 * get_nodeint_at_index - checks the node of a linked list listint_t
 * @head: a pointer to the head of the list
 * @index: index of the node
 *
 * Return: the node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
