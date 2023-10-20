#include "lists.h"
int len(const char *str);
list_t *create_n(const char *str);
/**
 * add_node_end - adds nodes to the end of a string
 * @head: pointer to the head
 * @str: the new node
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_n;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_n = create_n(str);
	if (new_n == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_n;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_n;
	return (*head);
}

/**
 * create_n -  a function that prints a new node
 * @str: string to be inputed
 * Return: the pointer
 */
list_t *create_n(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - length of string
 * @str: string to be checked
 * Return: length
 */
int len(const char *str)
{
	int a;

	if (str == NULL)
		return (0);

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
