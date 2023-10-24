#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data in listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
