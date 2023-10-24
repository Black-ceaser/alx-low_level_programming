#include "lists.h"

/**
 *free_listint - frees a list
 *@head: points to a node in listint_t
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *tmp = current;

		current = current->next;
		free(tmp);
	}
}
