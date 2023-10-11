#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newline
 * @array: array to be implemented
 * @size: how many element to print
 * @action: pointer to print in relgular or hex
 * Return: (0)
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
