#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of the list
 * @head: points to the head of the list
 * @n: stores a newly created node
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn = malloc(sizeof(listint_t));

	if (newn == NULL)
	{
		return (NULL);
	}
	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (newn);
}
