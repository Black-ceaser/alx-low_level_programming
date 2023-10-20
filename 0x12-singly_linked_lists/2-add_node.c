#include "lists.h"
int len(const char *str);
/**
 * add_node - appends a new node to the beginning of a list
 * @head: double pointer to list_t
 * @str: new string
 * Return: address of new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *noden;

	if (head == NULL)
		return (NULL);
	noden = malloc(sizeof(list_t));
	if (noden == NULL)
		return (NULL);
	if (*head == NULL)
		noden->next = NULL;
	else
		noden->next = *head;
	noden->str = strdup(str);
	noden->len = len(str);
	*head = noden;

	return (*head);
}
/**
 * len - get the lenth of the string
 * @str: the string
 * Return: length of string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
