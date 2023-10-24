#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t
 * @head: a pointer to the head node of the list
 * Return: the deleted head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
