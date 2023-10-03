#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate tonew memory space location
 * @str: character
 * Return: Success(0)
 */
char *_strdup(char *str)
{
	char *c;
	int i, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l]; l++)
	{
	c[l] = str[l];
	}
	return (c);
}

