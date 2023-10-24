#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the list
 * @head: points to the head of the list
 * @n: stores the newly created node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn = malloc(sizeof(listint_t));

	if (newn == NULL)
	{
		return (NULL);
	}

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
	}
	else
	{
		listint_t *tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newn;
	}
	return (newn);
}
