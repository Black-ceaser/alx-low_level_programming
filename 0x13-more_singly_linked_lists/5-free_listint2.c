#include "lists.h"
/**
 * free_listint2 - frees a list of linked list elements
 * @head: points to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *tmp;

	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
}
