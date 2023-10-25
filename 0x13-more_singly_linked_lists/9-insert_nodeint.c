#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to the pointer to the head of the list
 * @idx: The index where the new node should be added. Index starts at 0
 * @n: The data to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int count = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);  /* Return NULL if memory allocation fails */
	}

	new_node->n = n;  /* Set the data of the new node to n */

	/* If inserting at the beginning or an empty list */
	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;        /* Update the head to point to the new node */
		return (new_node);        /* Return the address of the new node */
	}

	/* Traverse the list to find the node at index idx - 1 */
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;  /* Move to the next node */
		count++;           /* Increment the index counter */
	}

	/* If the index is out of range, free the new node and return NULL */
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node between temp and temp->next */
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);  /* Return the address of the new node */
}
